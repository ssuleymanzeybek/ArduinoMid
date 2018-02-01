//
// Created by Angel Zaprianov on 25.7.2017 г..
//

#ifndef ARDUINO_MID_LPG_SERIAL_H
#define ARDUINO_MID_LPG_SERIAL_H

#include <Arduino.h>
#include "../MID.h"
#include "CmdSerial.h"
#include "../glob.h"
//
// Marker for start transmitting
#ifndef LPG_SERIAL_T_ST
#define LPG_SERIAL_T_ST 140
#endif
//
// Switching to default fuel
#ifndef LPG_SERIAL_T_FA
#define LPG_SERIAL_T_FA 218 // 219
#endif
//
// Switching to additional fuel (LPG)
#ifndef LPG_SERIAL_T_FBA
#define LPG_SERIAL_T_FBA 15
#endif
//
// Switching to additional fuel B
#ifndef LPG_SERIAL_T_FBB
#define LPG_SERIAL_T_FBB 100
#endif


#if defined(ADT_FUEL_SYSTEM_SERIAL)

//
// All buttons up - 18
class LpgSerial : public LpgFuel {

    AmpTime *amp;
    CarSens *car;
private:
    boolean lpgUse = false;
    boolean compare = 0;
    uint8_t fuelTankAverage = 0;
    uint8_t capture = 0;
    uint8_t trans;
    uint8_t history;
    uint8_t index = 0;

    uint8_t dinamic = 0;
    uint16_t fuelTankIndex = 0;
    uint32_t fuelTankCollector = 0;

    uint8_t data[2] = {};


private:
    void setTrans(uint8_t val) {
        /*
         99 = 18 - almost empty BNZ
         20 / 27 / 18 - bnz
         108 - switch
         99 = 100 switched
         148 - bnz
         100 - lpg
         99 = 219 full lpg
         99 = 18 full lpg LPG

         99 == 20 switch to lpg
         99 = 218 switch to bnz
         */
        if (val >= 34 && val < 255 && val != 99 && val != 98 && val != 100) {
            capture = history;
            trans = val;
        }

        //
        // Fixture 1
//        if(val > 17 && val < 28){
//            trans = 148;
//        }
    }

public:
    LpgSerial(AmpTime &ampTime, CarSens &carSens) : amp(&ampTime), car(&carSens) {

    }

    void begin(void) {
        //
        // 124 /

        Serial2.begin(248);//246
// pin 15
//        Serial3.begin(500);

    }

#define DEBUG_SR2

    void listener(void) {

// Button serial
//        if (Serial3.available()) {
//            Serial.println();
//            Serial.print("Serial 3: ");
//            Serial.println(Serial3.read());
//            Serial.println();
//        }


//        if (!compare) {
//            if (amp->is2Seconds())
//                if (car->getEngTmp() > 79) {
//                    trans = 50;
//                    compare = true;
//                    return;
//                }
//        } else return;



        if (Serial2.available() > 0) {


            if (trans != LPG_SERIAL_T_ST) {
                history = trans;
                //
                // Calculate averages
                if (fuelTankIndex > 10) {
                    fuelTankAverage = fuelTankCollector / fuelTankIndex;
                    fuelTankCollector = 0;
                    fuelTankIndex = 0;
                }

            }
            uint8_t val = (uint8_t) Serial2.read();
#if defined(DEBUG) && defined(DEBUG_SR2)
            Serial.println();
            Serial.print("Current val: ");
            Serial.println(val);
#endif

            if (val == 0 && lpgUse) {
                val = 100;
            } else if (val == 0 && !lpgUse) {
                val = 20;
            }

            if (val != 255 && val != 99) {
                data[index] = val;
                index++;
            }


            // 100 lpg run
            // 20 bnz
            // 18 stand by mode


            captureLpg(100); // 18 none / full
            captureLpg(18); // 219 none

            if (dinamic != 0) {
                captureLpg(dinamic);
            }

            captureBnz(20);
            captureBnz(218);


            // Skip action
//            if (data[0] == 100 || data[1] == 100 || history == 100) {
//                capture = trans;
//                if (!lpgUse) { // checks for opposite
//                    car->passMelodyClass()->play(1);
//                }
//                lpgUse = true;
//            }

//            if (data[0] == 18 || data[1] == 18 || history == 18) {
//                capture = trans;
//                if (!lpgUse) { // checks for opposite
//                    car->passMelodyClass()->play(1);
//                }
//                lpgUse = true;
//            }

            //
            // 218
            if (data[0] == 20 && history == 20 || data[1] == 20 && history == 20) {
                if (lpgUse) { // checks for opposite
                    car->passMelodyClass()->play(6);
                }
                lpgUse = false;
            }

            history = trans;
            trans = val;

#if defined(DEBUG) && defined(DEBUG_SR2)
            Serial.print("DATA: ");
            Serial.print(data[0]);
            Serial.print(" / ");
            Serial.print(data[1]);

            Serial.println();
            Serial.print("Recorded trans: ");
            Serial.println(trans);
#endif

            if (index >= 2) {
                index = 0;
                data[0] = 0;
                data[1] = 0;
            }


            //
            // Agg to average
//            fuelTankCollector = fuelTankCollector + trans;
//            fuelTankIndex++;
//
//
//            if (fuelTankAverage == 0) {
//                fuelTankAverage = trans;
//            }

        }


    }

/**
 *
 * @param value
 */
    void captureLpg(uint8_t value) {
        if (data[0] == value || data[1] == value || history == value) {
            capture = trans;
            if (!lpgUse) { // checks for opposite
                car->passMelodyClass()->play(1);
            }
            lpgUse = true;
        }
    }

/**
 *
 * @param value
 */
    void captureBnz(uint8_t value) {
        if (data[0] == value || data[1] == value || history == value) {
            capture = trans;
            if (lpgUse) { // checks for opposite
                car->passMelodyClass()->play(6);
            }
            lpgUse = false;
        }
    }

/**
 * Adds dynamic data to switch
 */
    void setDynamic(){
        dinamic = trans;
    }

    /**
     *
     */
    uint8_t getCurrentValue() override {
        return trans;
    }

    /**
     * Gets fuel tank level
     */
    uint8_t getFuelTankLiters() override {

        if (fuelTankAverage > 140) {
            return (uint8_t) map(fuelTankAverage, 215, 145, 65, 15);
        }
        return (uint8_t) map(fuelTankAverage, 75, 15, 5, 30);
    }

/**
 *  Is additional fuel active
 */
    boolean isLPG() override {
//        return (history < 140 && history > 27 || trans < 140 && trans > 27 || lpg == 1) ? true : false;

        return lpgUse;
    }

/**
 *  Is default fuel active
 */
    inline boolean isBNZ() override {
//        return (trans > 140 && trans == history || trans == 27 || stateStart == false || lpg == 2) ? true : false;
        return (!lpgUse) ? true : false;
    }

};

#elif defined(LPG_SWTC_PIN)


class LpgSwitch : public LpgFuel {

    AmpTime *amp;
    boolean state = false;

public:
    LpgSwitch(AmpTime &ampTime) : amp(&ampTime) {

    }

    void listener() {
        if (amp->isSecond()) {
            state = (digitalRead(LPG_SWTC_PIN) == LPG_SWTC_STT) ? true : false;
        }
    }

    uint8_t getCurrentValue() {
        return 0;
    };

    virtual uint8_t getFuelTankLiters() {
        return 0;
    };

    boolean isLPG() {
        return state;
    }

    inline boolean isBNZ() {
        return !state;
    }

};

#endif

#endif //ARDUINOMID_LPGSERIAL_H

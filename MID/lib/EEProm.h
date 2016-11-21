//#include <USBAPI.h>

//
// Created by Angel Zaprianov on 28.6.2016 г..
//
// Since EEPROM have live time will use external-sourcecode ...
// http://www.hobbytronics.co.uk/arduino-external-eeprom

// http://playground.arduino.cc/Main/LibraryForI2CEEPROM
#include <Wire.h>

#include "MainFunc.h"


#ifndef ARDUINOMID_EepRom_H
#define ARDUINOMID_EepRom_H

#define EEP_ROM_ADDRESS 0x50    //Address of 24LC256 eeprom chip
#define DEBUG_EEP_ROM
//#define EEP__INJ_SER true

//
//  Mega2560
// 	20 (SDA), 21 (SCL)
//
// Saves Addresses in EEP Rom
const int EEP_ADR_FTK = 0; // Fuel tank Astra G -  52 liter 14 gallons

const int EEP_ADR_TC1 = 1; // Consumption Float A
const int EEP_ADR_TC2 = 2; // Consumption Float B
const int EEP_ADR_TT1 = 3; // Total Travel distance
const int EEP_ADR_TT2 = 4; // Total Travel distance
const int EEP_ADR_WD1 = 5; // Trip distance
const int EEP_ADR_WD2 = 6; // Trip distance
const int EEP_ADR_TRD = 7; // Trip distance

const int EEP_ADR_TTT = 4; // Total Trip Time
const int EEP_ADR_TER = 4; // Time Engine Run
const int EEP_ADR_TRS = 5; // Tires size
const int EEP_ADR_RMS = 6; // Rims Size

//
// We’re using a 256kbit eeprom which is actually 32kbytes of space.
//      262,144 bits / 8 bits in a byte = 32,768 bytes.
//      That’s 62 times the Arduino’s built-in storage!

//
//
class EepRom {

    CarSens *_car;
public:
    EepRom(CarSens *carSens);

    void setup() {
        Wire.begin();
    };

    //
    // Called when zeroed current data
    void saveZeroingData();

    void saveFuelTankLevel(unsigned int value = 0) {
        WireEepRomWriteByte(EEP_ADR_FTK, value);
    };

    int loadFuelTankLevel() {
        WireEepRomRead(EEP_ADR_FTK);
    };

    /**
     *  SAVE Travel distance
     */
    void saveTravelDistance(float value = 0) {
        int val[2];

        separateFloat(value, val);

#if defined(DEBUG_EEP_ROM)
        Serial.print("EEP ROM records Travel value A: ");
        Serial.print(val[0]);
        Serial.print(" and  value B:");
        Serial.print(val[1]);
        Serial.print("\n\r");
#endif

        WireEepRomWriteByte(EEP_ADR_TT1, val[0]);
        WireEepRomWriteByte(EEP_ADR_TT2, val[1]);
    }

    /**
     *  LOAD Travel distance
     */
    float loadTravelDistance() {
        int va1 = WireEepRomRead(EEP_ADR_TT1);
        int va2 = WireEepRomRead(EEP_ADR_TT2);

#if defined(DEBUG_EEP_ROM)
        Serial.print("EEP ROM restore Travel value A: ");
        Serial.print(va1);
        Serial.print(" and  value B:");
        Serial.print(va2);
        Serial.print("\n\r");
#endif

        return restoreFloat(va1, va2);
    }

    /**
     *  Saves travel consumption
     */
    void saveTravelConsumption(float value = 0) {
        int val[2];

        separateFloat(value, val);

#if defined(DEBUG_EEP_ROM)
        Serial.print("EEP ROM records value A: ");
        Serial.print(val[0]);
        Serial.print(" and  value B:");
        Serial.print(val[1]);
        Serial.print("\n\r");
#endif

        WireEepRomWriteByte(EEP_ADR_TC1, val[0]);
        WireEepRomWriteByte(EEP_ADR_TC2, val[1]);
    }

    /**
     *  Loads travel consumption
     */
    float loadTravelConsumption() {

        int va1 = WireEepRomRead(EEP_ADR_TC1);
        int va2 = WireEepRomRead(EEP_ADR_TC2);


#if defined(DEBUG_EEP_ROM)
        Serial.print("EEP ROM restore value A: ");
        Serial.print(va1);
        Serial.print(" and  value B:");
        Serial.print(va2);
        Serial.print("\n\r");
#endif

        return restoreFloat(va1, va2);
    }

    /**
     *  LOAD Work distance
     */
    float loadWorkDistance() {
        int va1 = WireEepRomRead(EEP_ADR_WD1);
        int va2 = WireEepRomRead(EEP_ADR_WD2);

#if defined(DEBUG_EEP_ROM)
        Serial.print("EEP ROM restore Work Distance value A: ");
        Serial.print(va1);
        Serial.print(" and  value B:");
        Serial.print(va2);
        Serial.print("\n\r");
#endif

        return restoreFloat(va1, va2);
    }

    /**
     *  Saves Work distance
     */
    void saveWorkingDistance(float value = 0) {
        int val[2];

        separateFloat(value, val);

#if defined(DEBUG_EEP_ROM)
        Serial.print("EEP ROM records Work Distance A: ");
        Serial.print(val[0]);
        Serial.print(" and  value B:");
        Serial.print(val[1]);
        Serial.print("\n\r");
#endif

        WireEepRomWriteByte(EEP_ADR_WD1, val[0]);
        WireEepRomWriteByte(EEP_ADR_WD2, val[1]);
    }


    void saveTripDistance(unsigned int value = 0) {
        WireEepRomWriteByte(EEP_ADR_TRD, value / 4);
    }

    int long loadTripDistance(unsigned int value = 0) {
        return WireEepRomRead(EEP_ADR_TRD) * 4;
    }

    void saveCurrentData();

    void loadCurrentData();


    void WireEepRomWriteByte(uint16_t theMemoryAddress, int u8Byte) {

        Wire.beginTransmission(EEP_ROM_ADDRESS);
        Wire.write((theMemoryAddress >> 8) & 0xFF);
        Wire.write((theMemoryAddress >> 0) & 0xFF);
        Wire.write((uint8_t) u8Byte);
        Wire.endTransmission();
        delay(10);
    }


    int WireEepRomRead(uint16_t theMemoryAddress) {

        int u8retVal = 0;
        Wire.beginTransmission(EEP_ROM_ADDRESS);
        Wire.write((theMemoryAddress >> 8) & 0xFF);
        Wire.write((theMemoryAddress >> 0) & 0xFF);
        Wire.endTransmission();
        delay(10);
        Wire.requestFrom(EEP_ROM_ADDRESS, 1);
        if (Wire.available()) u8retVal = Wire.read();
        return u8retVal;
    }

private:

    byte noElem = 12;
    unsigned int baseAddress = 0;


};

EepRom::EepRom(CarSens *carSens) {
    _car = carSens;
}


/**
 * Saves data to EepRom
 */
void EepRom::saveCurrentData() {

    TTL_TLC = TTL_TLC + TTL_CLC;
    saveTravelConsumption(TTL_TLC);

    TTL_TTD = TTL_TTD + _car->getDst();

    saveTravelDistance(TTL_TTD);


}


void EepRom::loadCurrentData() {
    TTL_TLC = loadTravelConsumption();
    TTL_TTD = loadTravelDistance();
    TTL_WRD = loadWorkDistance();
}


void EepRom::saveZeroingData() {
    int assumedTravel = int(TTL_TTD);
    TTL_TLC = 0;
    TTL_TTD = 0;
    TTL_WRD = TTL_WRD + (assumedTravel / 1000);

    saveTravelConsumption(TTL_TLC);
    saveTravelDistance(TTL_TTD);
    saveWorkingDistance(TTL_WRD);
}

#endif
//
// Created by Admin on 12/27/2017.
//

#ifndef ARDUINO_MID_GLOB_H
#define ARDUINO_MID_GLOB_H

#include <Arduino.h>
#include "lib/MenuBackend.h"


// serial print macros
#define DBG_INIT(...) { Serial.begin(__VA_ARGS__);  } initialization
#define DBG_P(...)    { Serial.print(__VA_ARGS__);  } print
#define DBG_PLN(...)  { Serial.println(__VA_ARGS__); } // print line


//
//
//
/***************************************************************************
 * LPG fuel support configuration
 ***************************************************************************/
//
//
//
// Global Menu cursor

volatile uint8_t MidCursorMenu = 0;

/**
 * LCD  interface
 */
class LcdUiInterface {
public:

    virtual void draw() = 0;

    virtual void intro() = 0;

    virtual void begin() = 0;

    virtual void drawShutdownBegin() = 0;

    virtual void drawShutdownShort() = 0;

    virtual void drawShutdownCount(char[2]) = 0;

    virtual void draWShutdownTripSave() = 0;

    virtual void draWShutdownTripSkip() = 0;

    virtual void warnCoolant() = 0;

    virtual void warnBattery(float Voltage) = 0;

    virtual void warnMotorOil() = 0;

    virtual void warnBreakWare() = 0;

    virtual void warnOverheat() = 0;

    virtual void warnWinter() = 0;

    virtual void warnWasher() = 0;

    virtual void warnTmBelt() = 0;

    virtual void warnLightsFront() = 0;

    virtual void warnLightsBack() = 0;

protected:

#ifdef ARDUINO_MID_LAN
    char messageBuffer[128];
#endif
    //
    // Defining content generate container variables
    char char_2[3];
    char char_3[4];
    char char_4[5];
    char char_5[6];
    char char_6[7];
    char char_7[8];


#ifdef ARDUINO_MID_LAN

    /**
 * Gets string message
 */
    const char *getMsg(uint8_t i) {
        strcpy_P(messageBuffer, (char *) pgm_read_word(&(LcdMsgTable[i])));
        return messageBuffer;
    }

#endif
};

/**
 *  Menu interface
 */
class MenuUiInterface {
public:

    virtual void begin() = 0;

    virtual void menuChanged(MenuChangeEvent change) = 0;

    virtual MenuBackend getMB() = 0;

    virtual void moveUp() = 0;

    virtual void moveDw() = 0;
};


static void menuUseEvent(MenuUseEvent used);

static void menuChangeEvent(MenuChangeEvent changed);

/**
 * Trip data
 */
struct TripData {
    float fuel = sqrt(-1);
    float range = sqrt(-1);
};
/**
 * EepRom  data
 */

struct SavedData {
    float fuel_adt;
    float fuel_def;
    float dist_trv;
    float total_km;
    float time_trp;
    float dist_trp;

    float sens_vss;
    float sens_rpm;
    float sens_dst;
    float sens_ecu;

    TripData trip_a;
    TripData trip_b;
    TripData trip_c;
};

#ifdef ADT_FUEL_SYSTEM_SERIAL
class LpgFuel {
public:
    virtual boolean isLPG() = 0;

    virtual boolean isBNZ() = 0;

    virtual uint8_t getCurrentValue() = 0;

    virtual uint8_t getFuelTankLiters() = 0;
};
#endif


#endif //ARDUINOMID_GLOB_H
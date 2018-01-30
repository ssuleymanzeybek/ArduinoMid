/*
---------------------------------------------------
    Arduino MID

     Author: Angel Zaprianov <me@fire1.eu>
     Start Date: 09.06.2016

     For the full copyright and license information, please view the LICENSE
     file that was distributed with this source code.
---------------------------------------------------

 MID function menu
*/

//
//
// Maybe Mid ino needs to be separated in two different variants 16x2 && 240x64


#include <Arduino.h>
//#include <SPI.h>
#include <OneWire.h>
#include "lib/MenuBackend.h"
#include <DallasTemperature.h>
//#include <SD.h>
//
#ifdef EEP_ROM_ADDRESS

#include <Wire.h>

#else

#include <EEPROM.h>

#endif
//
#include "MID.h"
#include "lib/InitObj.h"
#include "lib/InitLcd.h"


//
// Log file
//File logFile;

//
// Setup the code...
void setup() {
    //
    // Sets display pins to socket
    lcdPwr.begin();
    //
    // Setup SPI lib
    whlSens.begin(ALP_PIN_INP, ALP_PIN_OUT, ALP_PIN_MSK);
    //
    // Shutdown setup vehicle
    shutDown.begin(SAV_PIN_CTR, SAV_PIN_DTC, TONE_ADT_PIN);
    //
    // Debug serial
#if defined(DEBUG) && defined(SERIAL_MONITOR_BAUD)
    Serial.begin(SERIAL_MONITOR_BAUD);
#endif
    //
    // Change timer 3
    setupTimer3();
    //
    // Starts sound effects
    melody.begin();
    //
    //
    eepRom.begin();
    //
    // Setup button listener
    btnMenu.begin(BTN_PIN_UP, BTN_PIN_DW, BRK_LGH_PIN, TONE_ADT_PIN);
    //
    // Sets Default Fuel as Benzine (fuel that engine will start) and additional LPG
    carSens.setupFuel({ifc: FUEL_BNZ_IFC, cns: FUEL_BNZ_CNS}, {ifc: FUEL_LPG_IFC, cns: FUEL_LPG_CNS});
    //
    // consumption
    // Engine / Speed sensors
    carSens.setupVehicle(SPD_SNS_PIN, RPM_SNS_PIN, ECU_SGN_PIN, ENG_CLT_PIN, BRK_LGH_PIN, FUL_TNK_PIN);
    //
    // Screen back-light
    carSens.setupScreen(DIM_PIN_VAL, DIM_PIN_OUT);
    //
    // Outside temperature (car stock temp sns)
    carSens.setupTemperature(TMP_PIN_OUT);
    //
    //  Setup car state pins to detect
    carStat.begin(STT_OIL_PIN, STT_CLN_PIN, STT_WNW_PIN, STT_BRK_PIN, STT_VLT_PIN);
    //
    //
    lcdMenu.begin();
    //
    // Set MID menu
    midMenu.begin();
    //
    // Restore data
    eepRom.load();
    //
    // Pass saved data to car state for calculation
    carStat.setWorkState(eepRom.getWorkDistance());

    //
    // Shows MID intro
    lcdMenu.intro();
    //
    // Restore custom settings of var
    carSens.setSave(eepRom.getData());

    carStat.setWorkState(eepRom.getWorkDistance());
    //
    // TODO testing ...

#ifdef ADT_FUEL_SYSTEM_SERIAL
    lpgCom.begin();
#endif


    //
    // Light lamps test
    pinMode(A12, INPUT_PULLUP);
    pinMode(A13, INPUT_PULLUP);
}

//void loop() {
//    u8g2.firstPage();
//    u8g2.enableUTF8Print();
//    do {
//        u8g2.setFont(u8g2_opel_font_bold);
//        u8g2.setCursor(120, 10);
//        u8g2.print(F("Testing"));    /* Hello World */
//        u8g2.setCursor(120, 30);
//        u8g2.print(F("Тестово"));    /* Hello World */
//
//    } while (u8g2.nextPage());
//    delay(1000);
//}


void loop() {



//    if (ampInt.is5Seconds())
//        analogWrite(STT_OIL_PIN, 0);
    //
    // Amplitude loop init
    ampInt.listener();
    //
    // Listen sound tempo
    melody.listener();
    //
    // Listen engine
    carSens.listener();
    //
    // Reads buttons from steering
    whlSens.listener();

    //
    // Listener shutdown
    shutDown.listener();
    //
    //  Read main buttons
    btnMenu.listener();
    //
    // Navigate menu from button listener
    menuBase.listener();
    //
    //  Switch to shutdown menu
    shutDown.cursor();
    //
    // Listen state pins
    carStat.listener();

//
//    if(ampInt.isSens()){
//        Serial.print("RPM: ");
//        Serial.println(carSens.getRpm());
//    }
    //
    // Listen LPG fuel system from serial com
#ifdef ADT_FUEL_SYSTEM_SERIAL
    lpgCom.listener();
    carSens.setFuelListener(&lpgCom);
////
//    if (ampInt.isSecond()) {
//        Serial.print("LPG");
//        Serial.println(eepRom.getAdtFuel());
//        Serial.print(F("VSS: "));
//        Serial.print(carSens.getVss());
//        whlSens.getCurrentState();
//        Serial.println();
//        Serial.print(F("LEN: "));
//        Serial.print(vssPulseLen);
//        Serial.println();
//    }


    //
    // set usage of LPG system without the switching listener
#elif defined(LPG_INSTALLATION)
    carSens.setFuelListener(true);
#else// Only default fuel system (benzine)
    carSens.setFuelListener();
#endif
    //
    // Display UI
    lcdMenu.draw();
    //
    // Commands that changes global value from serial monitor
    // ttd=<0000> INJECTS: Total distance
    // lpg=<0000> INJECTS: lpg consumption
    // bnz=<0000> INJECTS: bnz consumption
    dbgSerial.listener();

}

// TODO make tast with this ISR
//ISR(USART2_RX_vect){
//
//}
//

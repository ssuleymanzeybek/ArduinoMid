//
// Created by Angel Zaprianov on 9.5.2017 г..
//
// Translation: Dino Petek
//

#ifndef ARDUINO_MID_LAN
#define ARDUINO_MID_LAN

#include <Arduino.h>

//
// Keep letters size of text
//
//
const char msg0[] PROGMEM = "";
const char msg72[] PROGMEM = "Doviđenja...     ";
const char msg1[] PROGMEM = "do slijedećeg puta!";
const char msg2[] PROGMEM = "UNOS";
//
// Car state
const char msg3[] PROGMEM = "Stanje kočnica: ";
const char msg4[] PROGMEM = "Rashladna tekućina - stanje: ";
const char msg5[] PROGMEM = "Tekućina za stakla - stanje: ";
const char msg6[] PROGMEM = "Razina ulja: ";
const char msg7[] PROGMEM = "O.K."; // Is fine message
const char msg8[] PROGMEM = "ISPOD 25%"; // Problem message for liquid
const char msg9[] PROGMEM = "ISTROŠENE"; // Problem message for brakes
const char msg10[] PROGMEM = "PREGORJELA"; // Problem message for lamps
//
// Titles
const char msg11[] PROGMEM = "GLAVNI IZBORNIK";
const char msg12[] PROGMEM = "PUTNI ZAPISI";
const char msg13[] PROGMEM = "IZBORNIK GOR";
const char msg14[] PROGMEM = "SERVIS";
const char msg15[] PROGMEM = "O";
const char msg16[] PROGMEM = "NADZORNA PLOČA";
const char msg17[] PROGMEM = "POSTAVKE";
const char msg18[] PROGMEM = "TRENUTNA";
const char msg19[] PROGMEM = "ZADANO";
//
//
const char msg20[] PROGMEM = "Resetiranje putnih zapisa";
const char msg21[] PROGMEM = "Drži >R I stisni pedalu ";
const char msg22[] PROGMEM = "Firmware nadogradnja: www.git.io/vHlkd";
const char msg23[] PROGMEM = "ArduinoMID verzija ";
const char msg24[] PROGMEM = "Stisni \"S<\" za ulaz u postavke";
const char msg25[] PROGMEM = "Koristi \"S<\" za kretanje izbornikom";
const char msg26[] PROGMEM = "Dva puta stisni R<+S< za promjenu vrijednosti";
const char msg27[] PROGMEM = "BRZINA VOZILA"; // Senzot brzine vozila
const char msg28[] PROGMEM = "OKRETAJI MOTORA";
const char msg29[] PROGMEM = "KILOMETARSAT";
const char msg30[] PROGMEM = "POTROŠNJA";
const char msg31[] PROGMEM = "REZULTAT";
const char msg32[] PROGMEM = "Ugasi motor On/Off za spremiti";
const char msg33[] PROGMEM = "Koristi pedalu KOČNICE za kraj";
const char msg34[] PROGMEM = " Odmorite se";
const char msg35[] PROGMEM = " Otkrivena pospanost";
const char msg36[] PROGMEM = " Pogreška žarulje!";
//
// Zimski uvjeti
const char msg37[] PROGMEM = " SKLISKA CESTA!";
const char msg38[] PROGMEM = " ";
const char msg39[] PROGMEM = "Vozite oprezno!";
//
// Upozorenja nivo ulja
const char msg40[] PROGMEM = " NISKA RAZINA ULJA!";
const char msg41[] PROGMEM = "Razina ulja je ispod 25%";
const char msg42[] PROGMEM = "Nadolijte ulje";
//
// Upozorenje akumulatora
const char msg43[] PROGMEM = "PROBLEM S STRUJOM";
const char msg44[] PROGMEM = "Napon od: ";
const char msg45[] PROGMEM = "nije u radnom području";
//
// Upozorenja kočnica
const char msg46[] PROGMEM = " ISTROŠENE KOČNICE!";
const char msg47[] PROGMEM = "Provjerite stanje kočnica ";
const char msg48[] PROGMEM = " prednje kočnice su istrošene! ";
//
// Upozorenja rashladna tekućina
const char msg49[] PROGMEM = " NISKA RAZINA RASHLADNE TEKUĆINE!";
const char msg50[] PROGMEM = "Provjeri razinu rashladne tekućine";
const char msg51[] PROGMEM = "ako je potrebno nadolijte .";
//
// Upozorenje pregrijavanja
const char msg52[] PROGMEM = " PREGRIJAVANJE!!!";
const char msg53[] PROGMEM = "Temperatura motora ";
const char msg54[] PROGMEM = "je previsoka!";
//
// Upozorenje tekućine za stakla
const char msg55[] PROGMEM = " NISKA RAZINA TEKUĆINE ZA STAKLA!";
const char msg56[] PROGMEM = "Provjerite razinu tekućine za stakla ";
const char msg57[] PROGMEM = "ako je potrebno nadolijte.";
//
// Upozorenje žarulje
const char msg58[] PROGMEM = " PREGORJELA ŽARULJA ";
const char msg59[] PROGMEM = "Kvar žaruljice";
const char msg60[] PROGMEM = "Prednja svjetla";
const char msg61[] PROGMEM = "Zadnja svjetla ";
//
// Upozorenje pogonskog remena
const char msg62[] PROGMEM = " ISTROŠEN POGONSKI REMEN";
const char msg63[] PROGMEM = "Pogonski remen istrošen";
const char msg64[] PROGMEM = "Nakon promjene resetiraj podatke";
//
// Upozorenje Zračnog/uljnog filtera
const char msg65[] PROGMEM = " ULJNI/ZRAČNI FILTER ISTROŠEN";
const char msg66[] PROGMEM = "Zračni filter promijenite svakih";
const char msg67[] PROGMEM = " (Nakon promjene resetiraj podatke)";
//
// Vrijednosti
const char msg68[] PROGMEM = "L";
const char msg69[] PROGMEM = "km";
const char msg70[] PROGMEM = "h";
const char msg71[] PROGMEM = "L/h";


//

// Generate message table for LCD

const char *const LcdMsgTable[] PROGMEM = {
        msg0, msg1, msg2, msg3, msg4, msg5, msg6, msg7, msg8, msg9, msg10, msg11, msg12, msg13, msg14, msg15,
        msg16, msg17, msg18, msg19, msg20, msg21, msg22, msg23, msg24, msg25, msg26, msg27, msg28, msg29, msg30,
        msg31, msg32, msg33, msg34, msg35, msg36, msg37, msg38, msg39, msg40, msg41, msg42, msg43, msg44, msg45,
        msg46, msg47, msg48, msg49, msg50, msg51, msg52, msg53, msg54, msg55, msg56, msg57, msg58, msg59, msg60,
        msg61, msg62, msg63, msg64, msg65, msg66, msg67, msg68, msg69, msg70, msg71,msg72
};



#endif //ARDUINOMID_EN_H_H
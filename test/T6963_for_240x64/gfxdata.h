//#######################################################################
//File generated by BMP2C V1.18 17.01.2008
//hk@holger-klabunde.de
//http://www.holger-klabunde.de
//6 pixel per byte for T6963 and 6x8 font
//Horizontal pixel orientation for T6963
//Pixel orientation per Byte: D7..D0 
//#######################################################################
#ifndef picture_h //don't do multiple includes of this file
#define picture_h
#define __PROG_TYPES_COMPAT__
#include <avr/pgmspace.h> //Win-AVR
//#include <progmem.h> //AVR-GCC

#define pictureWIDTH 	120	//Width in pixels
#define pictureHEIGHT 	31	//Height in pixels
#define pictureBYTEWIDTH 	20	//Width in bytes

//Arduino Image1
#define ArduinoHEIGHT 	64	//Height in pixels
#define ArduinoBYTEWIDTH 	16	//Width in bytes

//Arduino Image2
#define Arduino1HEIGHT 	64	//Height in pixels
#define Arduino1BYTEWIDTH 	17	//Width in bytes


//extern const rom unsigned char picturebmp[]; //Microchip C18
//extern const unsigned char code picturebmp[]; //Keil
//extern const unsigned char picturebmp[]; //SDCC

extern prog_uchar IMG01bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG02bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG03bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG04bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG05bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG06bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG07bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG08bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG09bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG10bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG11bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG12bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG13bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG14bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG15bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG16bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG17bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG18bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG19bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG20bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG21bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG22bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG23bmp[]; //AVR-GCC, WinAVR
extern prog_uchar IMG24bmp[]; //AVR-GCC, WinAVR

extern prog_uchar Arduinobmp[]; //AVR-GCC, WinAVR

extern prog_uchar Arduino1bmp[]; //AVR-GCC, WinAVR

#endif //picture_h





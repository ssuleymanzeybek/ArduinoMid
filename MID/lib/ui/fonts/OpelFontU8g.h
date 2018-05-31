//
// Created by Angel Zaprianov on 6.12.2017 г..
//

#ifndef ARDUINOMID_OPEL_FONT_SM_U8G_H
#define ARDUINOMID_OPEL_FONT_SM_U8G_H

#include <stdlib.h>
#include <avr/pgmspace.h>
#include <U8g2lib.h>


#ifndef _U8G2LIB_HH
// Some IDE syntax mishmash fixer
#include "../../libraries/U8g2/src/U8g2lib.h"

#endif

// IC symbols
// @ 25% below
// # >R
// $ >S
// ` time
// ^ point
// ¡ Road
// ¢ instant
// £ check checkbox
// ¤ empty checkbox
// ¥ 100km
// ¦ inside
// § outside
// © Ice
// ª Sun
// « Petrol
// ¬ Switch arrow
// ® Break
// ¯ km
// °  °
// ±  л
// ²  ч
// ³  h
// ´  L
// ¶  coffee
// ·  drop
// ¹  lamp
// »  lpg
// ¼ connection
// ½ settings
// ¾ petrol station
// ¿ car
// ÷ \
// ø Ø
// × delete

//
// Bold font whit icons
extern
const uint8_t u8g_font_opel_ic_13[6142] U8G2_FONT_SECTION("u8g_font_opel_ic_13") =
        "\247\0\3\3\4\4\3\4\6\23\20\374\375\11\375\12\376\1\216\3\63\12M \5\0\314\21!\7\242\304"
                "\21O\4\42\10C\355\22\21-\1#\25\212\304\265\224\240\204&)I\42\224\321H\22\221I\206\22\1"
                "$\23\212\304\325\223\240\204&\233\211h\222Q\210&\231N\0%\24\230\304\64\242,\241\220P\22\7\204"
                "#BQJ(I\2&\23\230D\64CQL\24\34\212b\42\65\211lB\211\0'\6A\355\21\4"
                "(\15\304\64R\22\221D\244\67\221L\0)\15\304\63\22\62\221L\244\27\221D\4*\7\63\375\23\221"
                "\34+\12U\325S\301P)\30\2,\10B\264\21\24\11\0-\6\24\334\22\4.\6\42\304\21\4/"
                "\13\264<RZD\272\210\224\0\60\13\226\304\63\24\21?I(\0\61\10\223\305S\221\212>\62\13\226"
                "\304\63\224\230P\233\66\3\63\16\226\304\63\224\230Pi*\234I(\0\64\20\227\304\223R\341,\42\12"
                "\211B\222\243T\2\65\17\226\304S$\231\220\24\22\12g\22\12\0\66\14\226\304s\332*\42N\22\12"
                "\0\67\16\227\304\23G\251P*\224\12\245B\0\70\16\226\304\63\24\21\223\204\42b\222P\0\71\14\226"
                "\304\63\24\21'\11M#\0:\7b\304\21D\2;\11\202\264\21D\212\4\0<\12tUs!\211"
                "i$\13=\7\64\335\23D\2>\13tU\23\61\321\310\42\212\1?\17\245D\63\223\220Li\62\222"
                "Cd\42\0@!\255JWqP,\16\10\306\1\301\70 \22\212\3\42\222\274TRT\342\200H("
                "\16\10\36$\0A\21\231D\225q\300x*\21JdJ\27)U\0B\15\227D\24\26\31\333I\306"
                "v\210\0C\14\227DT$\331TgY\210\2D\15\230\304\24&\231D\310\67\211\11\0E\13\226\304"
                "\23\207\240bE\250hF\14\226\304\23\207\240bE\250\21\0G\17\230\304T%\341X\311H\224\310D"
                "\25\0H\13\230\304\24B\216\207\42G\1I\7\222\304\21\17\4J\10\224\304R\372\251\2K\22\230\304"
                "\24B\232D\244\42#Jd\42\65\211P\0L\10\226\304\23B\375hM\24\231D\65\321\220L\62\273"
                "\34\42\226\11eB\231\220B\2N\20\231D\25aj\321F\21\221$\64cU\0O\15\231DU\65"
                "\25)\257\22\231\254\4P\14\226\304\23\25\21\323E\250\21\0Q\17\271\64U\65\25)\257\22\231\254("
                ">\4R\22\227D\24%\25\221D$)ID*\42\211L\0S\15\226\304\63\24\331pH\134\223P"
                "\0T\11\226\304\23&\241~\2U\14\230\304\24B~\224\210d$\0V\22\231\304\24R\252D&\222"
                "\251\10%\322\361\34\20\4W\30\233D\26\262\30i$\221LD\222\211\354\20\233\14'\323X\70\26\3"
                "X\20\231\304\24R\211LE:^\225\310T\244\2Y\15\230\304\24B\211H\33U\254\33\0Z\14\230"
                "\304\64We\251\262Tz\10[\10\243<\22\25\375\62\134\14\265;\22\62\241Lm\246Q&]\10\243"
                "<\22\23\375R^\20\205L\63\223\230$\42\213$Eb\301\20\0_\6\27\264\23\7`\17\206\314\23"
                "\67ID&\224I\42\222\203\0a\11fE\64K\234$\5b\14\246E\24B\215\25\21\247\13\0c"
                "\12dE\63\225\221Jd\0d\12\246E\224\272\234\70I\12e\12e\305\63\23\11\305\42$f\14\245"
                "\304r\42\65\21I\246\23\0g\14\226-\64K\234$\305\321\204\2h\13\246E\24B\215\25\21O\2"
                "i\10\222\304\21\244C\1j\12\304\253Q\312\42}Q\2k\15\246\305\23B\235(\22\222D'\1l"
                "\7\242\304\21\17\6m\16h\305\25\27\25\212\204\42\241H(\12n\11fE\24\25\21O\2o\13f"
                "E\64\24\21'\11\5\0p\14\226-\24\221\211\210\323E\250\10q\12\226-\64K\234$E\15r\12"
                "d\305\22\22\212H\23\0s\11dE\63\245\245\12\0t\13\205\304R\61QE\246Q\2u\11fE"
                "\24\42\236$\5v\15g\304\23\62\211\222D\66\234\306\0w\20iD\25\242\20e\42\71Mf\22a"
                ",\4x\14g\304\23\62\211\332p&Q\23y\20\227\254\23\62\211H\242F\33\16\205C!\0z\12"
                "f\304\23\66E\231\314\0{\14\304\264R\22\221\26\231H\67\1|\7\321\255\21\7\3}\15\304\264\22"
                "\62\221\66\211H\27\21\0~\10&\334\63\42\25\0\240\5\0\314\21\241\23\215D\227u\300dz\220U"
                "*\207C\345P\71\34\12\242\13\205LS\242\221\250\244\226\10\243\27\251\315V\265h$\16\220F\204\22"
                "ID$\231\211\202\221h\254\4\244\30\251\315V\265h$\16\20EB\262\230,&\212\204\344\200H\64"
                "V\2\245\24\212\314\65\241XD\222\377\24\213C#\241HH\24\311\17\246\42\314\304vqX$\16\212"
                "D\304s\320$\16\30G\62ER&\21Qd\22\231D&\341X\34\62\7\247!\314\304v\241i$"
                "\16\212D\304s\320$\16\30N\62N&\241\210d\222\26\231\204cq\310\34\0\250\33\273\305\26\301\224"
                "X\326\360\70B\214\204$\222h,\32\14\245\304$\262\70\60\0\251 \273\305\66\241H(\42\213\211\262"
                "F\322Rb\221\331$\26\211\245\244\206\222d\61I(\22\212\0\252\26\273\305\26\301\224X\326\360\34P"
                "\223Tdu\300\70\32\313\22L\253\26\251LU\21\322\360 \222\312\1\222,\222,\222,r@\344\2"
                "\254\12U\335\23\321\224\230h\0\255\6\24\334\22\4\256\25\253D\366\260\320P\304t\30\35F\226\21\223"
                ",\62\215\15\1\257\21Y\315\25qHR$\42\212D$Y$i\1\260\17\227\313\63\302P,\24\24"
                "\11\303\331\1\2\261\11TMS\222\274\210\2\262\12S\315\22\21\225\210(\0\263\12c\315\22\241\220$"
                "\242\22\264\10RM\22\221,\2\265\13\226\255\23\42\236\16CE\0\266\31\313<V\221\324Pj,\216"
                "t;L\16\222\310)T\21\316\221\16\23\0\267\33\311<\225qH\34\22\7D\302\221h,\30\13\306"
                "\242\263\70 \22\231\244\3\2\270\10\63\255\62\242\11\0\271\14\205D\63\223\230J\312h-\4\272\12D"
                "\364\62\222\220(\42\1\273\27\251L\25\7I(\351\22\7H\262H\262H\262\310\1\221h\344 \274\21"
                "\231D\25\322\332d\255,\225\210(\223\64\243\0\275\16\251D\325b\252\34@$N\67\313\1\276\30\252"
                "\304\65\343J,E\24\13IJ\21\223\244\24\62E*)\245\20\0\277\31\217D\230w@\34\20\213\304"
                "A\221\310\301\24:\205\250\244\203i\16\230\0\300\24\311\304tr\210\34)\16\30O%B\211L\351\42"
                "\245\12\301\23\311\304\264b\71R\34\60\236J\204\22\231\322EJ\25\302\25\311\304\224q@$\216\24\7"
                "\214\247\22\241D\246t\221R\5\303\25\311\304t\222`D\216\24\7\214\247\22\241D\246t\221R\5\304"
                "\25\311\304T\22\241D\216\22\7\214\247\22\241D\246t\221R\5\305\27\331\304\224q@$\16\210\243\305"
                "\1\343\251D(\221)]\244T\1\306\17\232E\226\66\62U\42\225\220\24m\332\12\307\17\307,T$"
                "\331TgY\210(\16\312\0\310\16\306\304\63R\71\344\20T\254\10\25\15\311\15\306\304s\352\220CP"
                "\261\42T\64\312\17\306\304s\301H\34p\10*V\204\212\6\313\15\306\304\63:\37\202\212\25\241\242\1"
                "\314\11\303\303\21\42\241D\315\11\303\304\61D\211\376\2\316\12\303\304\61\331$\372\13\0\317\13\305\303"
                "\21\22\212X\246?\1\320\22\231\303\64\66%\241Dx\222\10%B\211Ld\2\321\24\311Du\222`"
                "D\16\15S\213\66\212\210$\241\31\253\2\322\21\311Dur\210\34\241\246\42\345U\42\223\225\0\323\20"
                "\311D\265b\71BME\312\253D&+\1\324\22\311D\225q@$\216PS\221\362*\221\311J\0"
                "\325\22\311Du\222`D\216PS\221\362*\221\311J\0\326\22\311DU\22\241D\16\256\251Hy\225"
                "\310d%\0\327\13\206\314\63\24;\200\304\13\0\330\25\231DU\225\210L\42\254EH!J\254(\221"
                "IB$\0\331\17\310\304Tr\200\34(\344G\211HF\2\332\16\310\304\224R\71P\310\217\22\221\214"
                "\4\333\17\310\304\224\341H\34&\344G\211HF\2\334\20\310\304T\22\231D\16\22\362\243D$#\1"
                "\335\17\310\304\224R\71PE\244\215*\326\15\0\336\14\226\304\23\302\212\210\323E(\4\337\15\246E\64"
                "#\211^*\42N\27\0\340\14\226E\64R\71h\62\342$)\341\14\226Et\352\240\311\210\223\244\0"
                "\342\14\226Et\301H\34\262\304IR\343\15\226ET\222\24\71d\211\223\244\0\344\14\226E\64\272\3"
                "&#N\222\2\345\16\246Et\301H\60\16\232\214\70I\12\346\16jE\66\207\210HD\22\61\251\216"
                "\10\347\15\224-\63\225\221Jd\42\213\210\0\350\15\225\305\63B\71`\42\241X\204\4\351\15\225\305s"
                "\42\71`\42\241X\204\4\352\16\225\305S\261H\34\60\221P,B\2\353\15\225\305\23\22\212x\42\241"
                "X\204\4\354\11\223\303\21\42\241D\17\355\11\223\304\61D\211^\0\356\11\223\304\61\331$z\1\357\13"
                "\225\303\21\22\212X\246'\0\360\17\246ET\222\230,\22\225\234\70I(\0\361\15\226ET\222\24\71"
                "\240\42\342I\0\362\15\226E\64R\71\210\42\342$\241\0\363\14\226Et\352 \212\210\223\204\2\364\16"
                "\226Et\301H\34B\21q\222P\0\365\16\226ET\222\24\71\204\42\342$\241\0\366\15\226E\64\272"
                "\3(\42N\22\12\0\367\12cL\22\241X(\26\12\370\21fMT\222\244H(\42\11EB\221\210"
                "\10\0\371\14\226E\64R\71D\304\223\244\0\372\13\226Et\352\20\21O\222\2\373\14\226Et\301H"
                "\34 \342IR\374\12\226E\64:\213x\222\24\375\22\307\254\223\352 \231D$Q\243\15\207\302\241\20"
                "\0\376\16\326-\24B\215\25\21\247\213P\21\0\377\23\307\254\63J\22\71D&\21I\324h\303\241p"
                "(\4\0\0\1\0\23\271\304tt\224\70`<\225\10%\62\245\213\224*\1\1\14\206E\64t\310\22"
                "'I\1\1\2\25\311\304t\241\260\34)\16\30O%B\211L\351\42\245\12\1\3\16\226E\64\241\230"
                "\34\64\31q\222\24\1\4\27\311\254\224q\300x*\21JdJ\27)U\16\210\3\342 \1\1\5\14"
                "\226-\64K\234$\305d\1\1\6\17\307D\224\352@\222l\252\263,D\1\1\7\20\225Es\42\71"
                "`\42\211\310TB\23\0\1\14\21\307Dt\221h\34H\222Mu\226\205(\0\1\15\14\224E\63I"
                "\341\312H%\62\1\16\21\310\304T\221p\34j\222I\204|\223\230\0\1\17\27\251E\225\22\241D("
                "\12JB\65\221L$\23\311D\302\32\0\1\20\23\231\303\64\66%\241Dx\222\10%B\211Ld\2"
                "\1\21\23\247E\224RYQT\21ID\22\221D$\252\0\1\22\16\266\304\63t\300!\250X\21*"
                "\32\1\23\14\205\305\63\344\211\204b\21\22\1\26\17\306\304SB\71\344\20T\254\10\25\15\1\27\16\225"
                "\305S\62\71`\42\241X\204\4\1\30\16\306\254\23\207\240bE\250hL\26\1\31\16\226\255\63#\211"
                "\26\222\224\30\15\13\1\32\20\306\304S\221`\34r\10*V\204\212\6\1\33\16\225\305\63iq\310D"
                "B\261\10\11\1\36\22\270\304t\241\250\260$\34+\31\211\22\231\250\2\1\37\22\306-\64\241\230\34\64"
                "\31q\222\24G\23\12\0\1\42\22\310\254T%\341X\311H\224\310Du\260\70\6\1#\21\306-T"
                "Q\71h\62\342$)\216&\24\0\1*\12\264\303\21T\221\376\2\1+\12\204\303\21T\221^\0\1"
                ".\13\303\254\21\22\375%\24\23\1/\13\303\253\61\212\22\275\244\11\1\60\10\262\304\21\37\2\1\61\10"
                "b\304\21\207\2\1\66\26\310\254\24B\232D\244\42#Jd\42\65\211P\16\24\7\1\1\67\21\326\255"
                "\23B\235(\22\222D'\71D\30\3\1\71\14\306\304S\62\71H\250\37\15\1:\12\303\304\61\24\375"
                "\27\0\1;\15\306\254\23B\375h\207\10c\0\1<\12\322\254\21\17\246\11\0\1=\15\226\304\23\42"
                "\266QD\250\321\0\1>\15\245\304\22\22\246ID\246\67\0\1A\16\227\303\63R\225\330P*\234J"
                "\15\1B\13\244\303\61\42M&]\0\1C\23\311D\265b\71\64L-\332(\42\222\204f\254\12\1"
                "D\14\226Et\352\220\212\210'\1\1E\25\311,\25aj\321F\21\221$\64cU\16\226\3\202\0"
                "\1F\15\226-\24\25\21Or\210\60\6\1G\25\311Du\221\70 \16\16S\213\66\212\210$\241\31"
                "\253\2\1H\15\226ET\221`\34R\21\361$\1L\20\271DutpME\312\253D&+\1\1"
                "M\15\206E\64t\10E\304IB\1\1P\23\311D\225\22\231D\16\255\251Hy\225\310d%\0\1"
                "Q\22\227ET\22\355 \222\212H\42\222\210D$\0\1R\25\235DW\24\213l(\25J\205\322\212"
                "T(U\33S\14\1S\17jE\66\243\211HD\22\61\251\216\10\1T\25\307DtB\71\254\244\42"
                "\222\210$%\211HE$\221\11\1U\14\224\305R\22\251\204\42\322\4\1V\26\307,\24%\25\221D"
                "$)ID*\42\211L\16\223\306\0\1W\15\224\255\22\22\212H;@\24\2\1X\26\307DT\221"
                "h\34VR\21ID\222\222D\244\42\222\310\4\1Y\15\224\305\62IQ\11E\244\11\0\1Z\20\306"
                "\304s\352 \212l\70$\256I(\0\1[\13\224ES\22qi\251\2\1^\21\306\254\63\24\331p"
                "H\134\223\320A\302\30\0\1_\13\224-\63\245\245\262(\4\1`\22\306\304S\221`\34D\221\15\207"
                "\304\65\11\5\0\1a\14\224E\63I\341\322R\5\0\1b\15\306\254\23&\241~\207\11c\0\1c"
                "\17\265\254R\61QE\246Q\16\220\305\0\1d\16\306\304S\221`\34b\22\352'\0\1e\16\246\304"
                "\222J\221\220\254$\324*\2\1j\17\270\304Tt\230\220\37%\42\31\11\0\1k\14\206E\64t\200"
                "\210'I\1\1n\21\330\304\224\341H\70\16\24\362\243D$#\1\1o\16\246Et\301H\60\16\21"
                "\361$)\1p\21\310\304t\22\221D\16\22\362\243D$#\1\1q\23\227ET\22\355\20\221D$"
                "\21ID\22\221\250\2\1r\20\310\254\24B~\224\210dTq\34\42\2\1s\23\227-\24\42\211H"
                "\42\222\210$\42Q\65\34\7\10\1t\27\252\304v\304\321\350\20\231\35B\207\320!D\21\212\16A\32"
                "\0\1x\22\310\304T\22\231D\16\22JD\332\250b\335\0\1y\17\310\304\264\352\300\253\262TY*"
                "=\4\1z\14\226\304s\352\20\233\242Lf\1{\20\310\304\224b\71\360\252,U\226J\17\1\1|"
                "\15\226\304SB\71\304\246(\223\31\1}\21\310\304t\221p\34zU\226*K\245\207\0\3\207\7\42"
                "\334\21\4\3\210\25\232\300\63\222CH\16\221C\344\220\252\34\42\207\310!\6\3\211\26\233\301\64D\212"
                "P&\224\11e\207\230P&\224\11eB\1\3\212\11\225\301\61\26\231~\3\214\25\233B\65\222\222D"
                "\246*\222\212\244\42\251H*S-\1\3\216\25\233\301\64D\222\252HL\207\310Ar\220\34$\7\311"
                "\0\3\217\24\233B\65\222\222D\246*\222\212\244\42\251H*S[\3\220\16\247Cr\42JI\16\222"
                "\352,\2\3\221\22\231D\225q\300x*\21JdJ\27)U\0\3\222\16\227D\24\26\31\333I\306"
                "v\210\0\3\223\12\226\304\23\207\240~\4\3\224\22\231\304\224q\300x*\21JdJ\62\211\364@\3"
                "\225\14\226\304\23\207\240bE\250h\3\226\15\230\304\64We\251\262Tz\10\3\227\14\230\304\24B\216"
                "\207\42G\1\3\230\21\231DU\65\25)\313\204J\225\310d%\0\3\231\10\222\304\21\17\4\3\232\23"
                "\230\304\24B\232D\244\42#Jd\42\65\211P\0\3\233\22\231\304\224q\300x*\21JdJ\62\211"
                "\224*\3\234\26\233\304U\321\240L\266D!QH\222\211\322\210\64\242\305\4\3\235\21\231D\25aj"
                "\321F\21\221$\64cU\0\3\236\13\227D\24w,u,\7\3\237\16\231DU\65\25)\257\22\231"
                "\254\4\3\240\12\230\304\24\207!\24\3\241\15\226\304\23\25\21\323E\250\21\0\3\243\21\230D\24\207"
                "\210\34 \7\310\1R\255\207\0\3\244\12\226\304\23&\241~\2\3\245\16\230\304\24B\211H\33U\254"
                "\33\0\3\246\22\232D\225b\233D\223\210$\42\251h\63\13\1\3\247\21\231\304\24R\211LE:^"
                "\225\310T\244\2\3\250\24\232\304\25\42\21ID\22\221D$\25mf\71D\10\3\251\16\231DU\65"
                "\25)\257\22\231d\66\3\252\14\305C\22\22\212X\246?\1\3\253\22\310\304T\22\231D\16\22JD"
                "\332\250b\335\0\3\254\14\226Et\352\240\23'I\1\3\255\21\225Es\42\71`\42\211\214d\222\320"
                "\4\0\3\256\15\306-t\352\220\212\210'\241\6\3\257\12\223E\62D\211N\2\3\260\25\247Et\42"
                "JI\16\20ID\22\221D$\21\211H\0\3\261\12fE\64'N\222\2\3\262\17\325\255\63\23\11"
                "\213E\302\305\42S\3\3\263\15\226\254\23\42\222\204D\23\352\4\3\264\17\246ET\24\241TF\21q"
                "\222P\0\3\265\13dE\63\25\212H\22\31\3\266\17\264\65\23$\211H\42\322\66\222H\0\3\267\13"
                "\226-\24\25\21OB\15\3\270\16\245\305\63\23\11\313A\302E\62\1\3\271\11cE\22\22\235\4\3"
                "\272\15f\305\23\42\212\204$\321I\0\3\273\20\227\304\63R\261T:\234ID\22\65\1\3\274\14\226"
                "-\24\42\236\16CE\0\3\275\16g\304\23\62\211\222D\66\234\306\0\3\276\21\305\65S\23ID&"
                "\233\310\64\322D\22\0\3\277\14fE\64\24\21'\11\5\0\3\300\16gE\24\27%\211H\42\222\210"
                "\24\3\301\15\226-\64\24\21\247\213P\21\0\3\302\14\204\65\63%m#\211\4\0\3\303\20gE\64"
                "\207\220D$\21ID\42\22\0\3\304\12d\304\22\24\221\66\1\3\305\13fE\24\42\236$\24\0\3"
                "\306\23\330,tb\215\26\25\212\204\42\241\250\30\305j\0\3\307\21\227\254\23\62\211\222D\66\134\223\210"
                "$j\2\3\310\25\330\254tbm\22\11EB\221P$\24\25\243X\15\0\3\311\20hE\65\42\211"
                "\220\42\241H(\232$\0\3\312\15\225D\22\22\212X\246\243\4\0\3\313\14\226E\64:\213x\222P"
                "\0\3\314\15\226Et\352 \212\210\223\204\2\3\315\15\226Et\352\20\21O\22\12\0\3\316\23\230E"
                "\225R\71T$\21R$\24\11E\223\4\0\4\1\16\306\304\63:\37\202\212\25\241\242\1\4\2\25\231"
                "D\25V\71@\16\220\314Fj\42\231H&\222L\0\4\3\14\306\304s\352\220CP?\2\4\4\20"
                "\227DT$\331Tj\221\212e!\12\0\4\5\16\226\304\63\24\331pH\134\223P\0\4\6\10\222\304"
                "\21\17\4\4\7\14\305\303\21\22\212X\246?\1\4\10\11\224\304R\372\251\2\4\11\30\234\304\66W\231"
                "T&\225Ie%\231H\42\23Id\42b\5\0\4\12\27\233D\26\62\241L(\23\312\204\207\211L"
                "D\23\321D\264\12\0\4\13\23\231D\25V\71@\16\260)\311D\62\221L$\23\4\14\25\310\304\224"
                "R\71P&\21\351\42#Jd\42\65\211P\0\4\16\22\310\304T\251r\240\212H\33u*\226\12\247"
                "\0\4\17\15\270\264\24B\376x\230I\205\0\4\20\22\231\304\224q\300x*\21JdJ\27)U\0"
                "\4\21\16\227D\24\26\251\252E\306v\210\0\4\22\16\227D\24\26\31\333I\306v\210\0\4\23\12\226"
                "\304\23\207\240~\4\4\24\15\270\264\64&\375\71L\305\1\4\25\14\226\304\23\207\240bE\250h\4"
                "\26\26\234\304\26\302\230D\244\67\211\252U\242&R\221\311\206\321\0\4\27\17\226\304\63\224\230Pi*"
                "\234I(\0\4\30\21\231D\25\342)\261f\222PD\266\42U\0\4\31\24\311Du\241\260\34*\236"
                "\22k&\11Ed+R\5\4\32\22\230\304\24\62\211H\27\31Q\42\23\251I\204\2\4\33\24\230\304"
                "\64\27\231D&\221Id\22\231D&\221\21\5\4\34\25\231D\65\321\220L\62\273\34\42\226\11eB"
                "\231\220B\2\4\35\14\230\304\24B\216\207\42G\1\4\36\16\231DU\65\25)\257\22\231\254\4\4\37"
                "\12\230\304\24\207!\24\4 \15\226\304\23\25\21\323E\250\21\0\4!\15\227DT$\331TgY"
                "\210\2\4\42\12\226\304\23&\241~\2\4#\20\230\304\24B\211H\33u*\226\12\247\0\4$\22\232"
                "\304\225b\233D\223\210$\42\251h\63\13\1\4%\21\231D\25R\211LE:^\225\310T\244\2\4"
                "&\30\270\264\24\62\211L\42\223\310$\62\211L\42\223\310$\207\260T\2\4'\13\227D\24\62\336$"
                "V\15\4(\26\232E\26\42\21ID\22\221D$\21ID\22\221D\207\2\4)\34\272\65\26\42\211"
                "\222DI\242$Q\222(I\224$J\22\311a\16\221\3$\0\4*\15\230\304\24d\315\65\221\236*"
                "\0\4+\20\231\304\25R\256'\222\204$!IN\2\4,\15\226D\24B\215\25\21\323\5\0\4-"
                "\20\227D\64\244\230X*\261Jg\42\22\0\4.\26\234\304\26\262\222\232D\225\42\275R\244\24)I"
                "&\221\225\0\4/\22\227DT\25\221D$\21\211J\22%\211\210&\4\60\12fE\64K\234$\5"
                "\4\61\16\246E\224\42\231bE\304IB\1\4\62\14e\305\23\24\211EB\261\0\4\63\11d\305\22"
                "&\235\0\4\64\21w\274S\264\210H\42\222\210$\222C\64\0\4\65\13e\305\63\23\11\305\42$\4"
                "\66\16hE\25\22\11E\211fQ\241(\4\67\13dE\23\63\211LT\1\4\70\14fE\24\262\21"
                "\305B\232\11\4\71\20\226E\64\241\230\34\42\33Q,\244\231\0\4:\14e\305\23\22J\211\42\241\10"
                "\4;\17gD\64\26\221D$\21ID\64\1\4<\20gD\64\261\220D$\221L\16\225\210\0\4"
                "=\13fE\24\42\322a\304$\4>\14fE\64\24\21'\11\5\0\4?\12fE\24\207\20O\2"
                "\4@\15\226-\24\221\211\210\323E\250\10\4A\13dE\63\225\221Jd\0\4B\12fD\23&\241"
                "N\0\4C\21\227\254\23\62\211H\242F\33\16\205C!\0\4D\23\330,tb\215\26\25\212\204\42"
                "\241\250\30\305j\0\4E\15g\304\23\62\211\332p&Q\23\4F\22\207\65\24\42\211H\42\222\210$"
                "\42\311Q\11\0\4G\13e\305\23\22\26\11M\1\4H\21h\305\25\22\11EB\221P$\24\311a"
                "\0\4I\15\211\265\25\22\375\71\210\225\0\4J\16gD\24T)M\42\222\210(\0\4K\16h"
                "E\25B\242\211\42\241HL\2\4L\14e\305\23\62\31EB\261\0\4M\14dE\23\223\210d\64"
                "\251\0\4N\17i\305\25\42\212\322\211\42\242\210X\0\4O\13eD\63\26\212\204b\21\0";



//
// ¡ Engine icon
// ¢ Overheating
// £ Oil pressure
// ¤ Battery voltage

// ² Front lights
// ³ Rear lights
// ¦ Outside temperature
// § Inside temperature
// ° Celsius
// « Remote control Volume Up
// ¬ Remote Control Volume Down
// ­ Remote Control other option
// ¯ DRL
// ® Small lamp

//
//

extern uint8_t u8g_font_opel_ic_12[5856] U8G2_FONT_SECTION("u8g_font_opel_ic_12") =
        "\247\0\3\2\5\4\3\4\6\23\17\376\375\10\375\11\376\1n\2\357\12\0 \5\0\230#!\7\1\213"
                "#\6E\42\10c\332%\22K\0#\23Ii)\247,J\244\312I\252dQ\316\60H\303\1$\22"
                "Iii\227,J$mS\244J\266\263\14\322p%\20\7\211h\244$\222\42m\336\244HJ\42\5"
                "&\15\5\213g\244J\232E\233\226,\0'\6a\332#\6(\14ci\244\222(\211\272EY\0)"
                "\14ck$\262(\213\272DI\4*\13\245\310\246*\225)\211\222\4+\12\245\230\246\302h\220\302\10"
                ",\10\202hc*\12\0-\6#\250$\6.\6A\212#\4/\14Dy\344JY)+e\31\0"
                "\60\12\5\213g\226\314\267d\1\61\11\3\213\247\222%\352\1\62\13\5\213g\226,\254\265\15\2\63\15"
                "\5\213g\226,\214\324PK\26\0\64\16\6\211'C-\311\222\250\62\214i\2\65\17\6\211g\6%"
                "\35\242,M\305dH\0\66\13\5\213\347\32\227\314\226,\0\67\14\6\213'\216i\230\206i\30\2\70"
                "\15\5\213g\226LK\226\314\226,\0\71\13\5\213g\226\314\226\214Y\15:\7\301\212#$\1;\11"
                "\2ic\252I\242\0<\11\244\232\346\22%\24\3=\10d\252&\206p\10>\12\244\232&B\61Q"
                "\62\0?\15\5\211e\226,L\246\34\12\63\0@\26\14\211\355r L[\262\64\221\222\226EIL"
                "i\22\16\22\0A\17\7\211\350\322$L\302$+\15J\252\6B\16\5\213'\206$\323\6%\263\15"
                "\12\0C\13\6\213\250\246Lm\316\242\5D\15\6\213(\206(KBo\311\20\1E\13\5\213&\216"
                "\341\220\204\305AF\13\5\213&\216\341\220\204\215\0G\16\6\213\250\246L-\15a\222E\13\0H\12"
                "\7\213)R\353pu\15I\7\1\213#\16\2J\11\4\211\345\372\66$\0K\20\7\213(\302$\222"
                "\222PM\302(\313\224\64L\11\6\213'\322\276\16\3M\21\7\213j\262(\213\262\244E\251(\25)"
                "\222\12N\17\7\213)\322Q\311\244H\212\264D\134\3O\14\7\213\251\266J\352\232d\331\4P\14\5"
                "\213'\206$\263\15JX\4Q\17Gk\251\266J\352\232d\331\230\16\12\0R\20\6\213'\206(K"
                "\262$K\206\250-\11\3S\13\4\213f\224H,J\211\2T\12\7\211'\16Y\334\67\0U\13\7"
                "\213)R_\223,\233\0V\20\7\211(R\65\311\242\254\22&a\222f\0W\24\13\211+\302P\254"
                "DI\324\22eIc\322\232\305Y\6X\16\7\211(\322$\253\244q\232d\225\64Y\15\7\211(\322"
                "$\213\262J\32\267\1Z\14\7\211h\206\265\71\255\16C\0[\11C{$\206\250\237\6\134\13Dy"
                "$\262\60+f\305,]\11Cy$\246~\32\2^\11\243\272e\242$\261\4_\6&h&\16`"
                "\7B\352$\242\0a\12\305\212g\6\315-\31\2b\14%\213'\302\342\220dn\203\2c\13\304\212"
                "f\224H+%\12\0d\13%\213'[\6\315-\31\2e\14\304\212f\224hH\262(Q\0f\14"
                "$\211\244\224,\32\222\254\23\0g\15%[g\6\315-\31B-Y\0h\12%\213'\302\26\223\346"
                "\26i\7\1\213#\222aj\12cW\243\322\250O\13\0k\15%\213&\302\246%\322\222\250\222\5l"
                "\6!\213#\36m\16\311\210*\22I\221l\231\226i\231Vn\11\305\212'\22\223\346\26o\12\305\212"
                "g\226\314-Y\0p\14%['\206$s\33\224\260\10q\13%[g\6\315-\31\302\6r\11\303"
                "\212$\222%j\2s\10\303\212en\321\2t\13\4\211d\262hH\262\306\4u\11\305\212'\62O"
                "\212\22v\14\305\210&\62-)%Y\30\1w\16\311\210)\262L\253tJ\332\212Y\4x\13\305\210"
                "&\262\244\26fI-y\16&Y&B-j\11\305\64LC\0z\11\306\210&\216\35\207\1{\13"
                "ck\244\222\250%\213\332\2|\6\201Y\42>}\14ci$\262\250-\211Z\42\0~\10F\270g"
                "$\13\0\240\5\0\230#\241$\221y\62\376N\21\207U\35\302DI\206K\242\364\262(C\322bI"
                "\224\26K\262.\342\60(\211N\31~\242*\221y\62\376N\221tP\31\36\22eH\244!Q\206$"
                "\31\26e\320\6E\31\226dH\224!R\206D\31\36\22\235\62\374\0\243$\221y\62\376N\21\207\34"
                "P$UQ\222a\231\224d\32\62iX\244D\33\206,\321\206Y\247\350\224\341\7\244%\221y\62\376"
                "N\221\326I\31\36\22e\70$\226l\320\22e\70$\226\341!Q\206\207D\31\36\22\235\62\374\0\245"
                "\30j\215.uD\7\206\70J%Q\322\246\303\240\14\321\60H\303\203\0\246\17'\231(\27IQ*"
                "\252\61\312\206P\4\247\17'\231(\223\304\244,\252\61\312\206P\4\250\30k\213-\302J\326\32\317\311"
                "\20&\221\242\244Y\32F\225L\321r\60\251\35k\213m\242$J\264LjMj\225,\331\226,\311"
                "*\325\250\244eJ\224D\11\0\252\26k\213-\302J\326\32\357\300\240)\203\242\15:\60\247YKX"
                "\253\27J\211\353\201-\333t\244\42&\211\230\344@\226m\321\220\3:\0\254\27J\211\353\201\64Ku"
                "\244\42&\211\230\344@\266l\303\220\3:\0\255\27J\211\353\201-\333t\244\262%\311\226\344@\266l"
                "\303\220\3:\0\256\13\304\310d$K$%\12\0\257\17\312\270+$)\351\377\42%\275HI\42\260"
                "\13\6\213h\302$\214\264\264Y\261\14\345\230\246\302h\220\302\34\30\4\262\26M\231nv,G\65\71"
                "S\304\314\254\16\212\232j\26\233\250\2\263\31M\231\356!\35LbIU\224\222\246\264\252\251\62$\232"
                "\216\270\3\242\0\264\7B\352d\24\0\265\13%['\62O\203\42\26\1\266\34\213y\254\222jT\315"
                "r\322\60d\303!\31.\311\60D\321\240\210;i\70$\0\267\31M\231\356!\35LbIU\224\222"
                "\246\264\252\251\62$\232\216\270\3\242\0\270\7cXd\244\5\271\7\242\272e\226\6\272\12\204\310e\224"
                "HJ\24\0\273\15\246\212&\242,\312\242$J\242\10\274\22)\211*\324A[n\203\254*\322\220,"
                "\265a\24\275\17I\211\252\345!\325\201!\34\302\365Y\7\276\23\11\211)\306R\246\245IeI\304\244"
                "\230\14Q\230\0\277\33\17\211\60\207!\7r Kr(I\206\207\250\32E\303C\64<D:\244\0"
                "\300\22g\211\250r \207\323$L\302$+\15J\252\6\301\21g\211(\323\34N\223\60\11\223\254\64"
                "(\251\32\302\22g\211\350\304(\7\323$L\302$+\15J\252\6\303\22g\211\350\222,\311\321J\230"
                "\204IV\32\224T\15\304\21G\211\250\222\34\255\204I\230d\245AI\325\0\305\23\207\211\350\322$\315"
                "\341\64\11\223\60\311J\203\222\252\1\306\22\13\211\253\7UG\352@\64d\345A\15\253\203\0\307\16f"
                "[\250\246Lm\316\242\61\316$\0\310\16e\213f\322\34\70\206C\22\26\7\1\311\15e\213\346\352\300"
                "\61\34\222\260\70\10\312\16e\213\246\244\352\60\206C\22\26\7\1\313\15E\213f\312\303\30\16IX\34"
                "\4\314\11b\211#\242,\351\7\315\11b\213c\264\244_\0\316\12d\211c\224(\315\372\11\317\12C"
                "\211#\222\60\352\27\0\320\21\7\211h\206\254\24\16R\22&a\222EC\4\321\23g\213\351\222,\311"
                "\241tT\62)\222\42-\21\327\0\322\17g\213\251r G\267J\352\232d\331\4\323\17g\213)\323"
                "\34\335*\251k\222e\23\0\324\17g\213\351\304(\307\266J\352\232d\331\4\325\20g\213\351\222,\311"
                "\301\255\222\272&Y\66\1\326\17G\213\251\222\34\334*\251k\222e\23\0\327\7c\252&\222\16\330\22"
                "\7\213\251\226Z\222%R$EJ\226dI\62\1\331\16g\213\251r \307R_\223,\233\0\332\15"
                "g\213)\323\34K}M\262l\2\333\16g\213\351\304(GR_\223,\233\0\334\15G\213\251\222\34"
                "J}M\262l\2\335\17g\211(\323\34K\223,\312*i\334\6\336\15\5\213'\302pH\62mP"
                "\302\20\337\17%\213g\244J\224DI\242d.\12\0\340\14%\213g\322\34\31\64\267d\10\341\14%"
                "\213\347\352\310\240\271%C\0\342\14%\213\247\244\362\240\271%C\0\343\14%\213\247\222v`\320\334\222"
                "!\344\14\5\213g\352\300\240\271%C\0\345\16E\213\247\262$\313\221AsK\206\0\346\17\311\212k"
                "\206!\311\62-\332\246\254r\1\347\15$[f\224H+%R\230H\0\350\15$\213f\302X\211\206"
                "$\213\22\5\351\15$\213\346\242X\211\206$\213\22\5\352\16$\213f\224(U\242!\311\242D\1\353"
                "\15\4\213f\252J\64$Y\224(\0\354\11\42\211#\242,\351\1\355\11\42\213c\264\244\27\0\356\12"
                "$\211c\224(\315z\2\357\11\3\211#\222\60\352\5\360\15%\213\247\222HM\6\315-Y\0\361\13"
                "%\213\247\222\346\304\244\271\5\362\14%\213g\322\34Y\62\267d\1\363\14%\213\347\352\310\222\271%\13"
                "\0\364\14%\213\247\244\362\222\271%\13\0\365\14%\213\247\222v`\311\334\222\5\366\14\5\213g\352\300"
                "\222\271%\13\0\367\12\245\230\246r`\320\201\10\370\15\305\212g\6iI\224d\32\24\0\371\14%\213"
                "g\322\34\310<)J\0\372\13%\213\347\352@\346IQ\2\373\13%\213\247\244j\346IQ\2\374\12"
                "\5\213g\312\231'E\11\375\17\206Y&\353H\250E-\241\230\206i\10\376\16\205['\302\342\220d"
                "n\203\22\26\1\377\20fY\246\222\34\10\265\250%\24\323\60\15\1\0\0\1\0\22G\211\250\206\34L"
                "\223\60\11\223\254\64(\251\32\1\1\14\5\213g\206x\320\334\222!\1\2\22g\211\250\222pG+a"
                "\22&YiPR\65\1\3\15%\213gJ;\60hn\311\20\1\4\25hY\350\342$M\322$\314"
                "\262AJ\223\64\7\342\34\21\1\5\21&[g\206$K\262$K\262h\10\305X\1\6\16f\213("
                "\353\330\224\251\315Y\264\0\1\7\15$\213\346\242X\211\264R\242\0\1\14\17f\213h\242L\307\246L"
                "m\316\242\5\1\15\16$\213&\242DV\42\255\224(\0\1\16\21f\213(\242L\207\206(KBo"
                "\311\20\1\1\17\24'\213(\223\60\11\245!\312\242,\312\242,\33\42\0\1\20\22\7\211h\206\254\24"
                "\16R\22&a\222EC\4\1\21\23&\213'\263!\214\206$K\262$K\262hH\0\1\22\17E"
                "\213&\206x\30\303!\11\213\203\0\1\23\16\4\213&\206T\211\206$\213\22\5\1\26\16E\213\246r"
                "\340\30\16IX\34\4\1\27\16\4\213\246b%\32\222,J\24\0\1\30\16e[&\216\341\220\204\305"
                "A\253\12\1\31\16%[f\244\312\24F\321\26\246\2\1\32\17e\213f\242H\36\306pH\302\342 "
                "\1\33\17$\213&\242DV\242!\311\242D\1\1\36\20F\213\250\222\354\224\251\245!L\262h\1\1"
                "\37\17e[gJ\7\315-\31B-Y\0\1\42\20f[\250\246L-\15a\222E;X\2\1#"
                "\20\205[\247\302\34\31\64\267d\10\265d\1\1*\13D\211#\206\64\353'\0\1+\12\4\211#\206"
                "\64\353\11\1.\12cYc\242\376\222\11\1/\13cYc\322\250/\231\0\1\60\11A\213#\222a"
                "\20\1\61\7\301\212#\16\1\66\24g[(\302$\222\222PM\302(\313\224\64\307\322\20\1\67\21\205"
                "[&\302\246%\322\222\250\222\345@\226\1\1\71\14f\213\347\302\34J\373:\14\1:\12\202\213c\264"
                "\244\277\0\1;\15f['\322\276\16;\24f\0\1<\11\202Yc\372\67\5\1=\15\6\213'\222"
                ",\311\304\264u\30\1>\13#\213$\22e\211z\2\1A\15\7\211g\342J\250\246r<\14\1B"
                "\14#\211c\242\222\222H-\0\1C\22g\213)\323\34KG%\223\42)\322\22q\15\1D\14%"
                "\213'\263\70\61in\1\1E\23g[)\322Q\311\244H\212\264D\134s\60\315\0\1F\15%["
                "'\22\223\346\226\3Y\6\1G\22g\213\251\212:\224\216J&ER\244%\342\32\1H\15%\213g"
                "\242HNL\232[\0\1L\20G\213\251\206\34\333*\251k\222e\23\0\1M\14\5\213g\206x\311"
                "\334\222\5\1P\21g\213\351\222,\311\301\255\222\272&Y\66\1\1Q\15%\213\247\222v`\311\334\222"
                "\5\1R\26\14\213\255\206dPB\61\16\343!\211\303\70\15\345!\31\4\1S\17\311\212k.Y\246"
                "E\333\224U.\0\1T\23f\213\347\302\34\32\242,\311\222,\31\242\266$\14\1U\14#\213\244\222"
                "\60Y\242&\0\1V\24f['\206(K\262$K\206\250-\11s(\314\0\1W\14#[$\222"
                "%jN\42\0\1X\24f\213g\242LG\206(K\262$K\206\250-\11\3\1Y\15$\213$\242"
                "DM\22)k\3\1Z\16d\213\346\242X\211\304\242\224(\0\1[\13#\213\245\222t\331\242\5\1"
                "^\17d[f\224H,J\211\16D\21\0\1_\13#[en\321\232D\0\1`\17d\213&\242"
                "DV\42\261(%\12\0\1a\16$\213%\242DV*b\226H\0\1b\15gY'\16Y\334w"
                "\70\15\1\1c\17dYd\262hH\262\306\34\210\42\0\1d\16g\211\247\212:\64\14Y\334\67\0"
                "\1e\15$\211\344\222\246!\311\32\23\0\1j\16G\213\251\206\34I}M\262l\2\1k\14\5\213"
                "g\206\64\363\244(\1\1n\20\207\213\351\322$\315\261\324\327$\313&\0\1o\16E\213\247\262$\313"
                "\201\314\223\242\4\1p\20g\213\351\222,\311\241\324\327$\313&\0\1q\14%\213\247\222\346\314\223\242"
                "\4\1r\17g[)R_\223,[\343\34P\0\1s\21&['\262$K\262$K\42K\32\306"
                "\2\1x\20G\211\250\222\34J\223,\312*i\334\6\1y\16g\211h\353\330\260\66\247\325a\10\1"
                "z\14&\211&\353\310\60v\34\6\1{\16G\211(slX\233\323\352\60\4\1|\14\6\211\346r"
                "d\30;\16\3\1}\17g\211\250\212:\66\254\315iu\30\2\3\207\7A\272#\4\3\210\17\7\207"
                "f\206!\211\343!\213\313\203\0\3\211\23\11\207iT%\215\322h\30\242\64J\243\64J\3\3\212\11"
                "\3\207c\226\250\17\3\214\21\11\207i\242\251V\215\322(\215\322\254:\1\3\216\23\11\205hT)\13"
                "\263\64\311\201\34\311\221\34\311\0\3\217\23\10\211i\222)\311\242\64I\223\64I\243,Z\6\3\220\14"
                "$\211\243\22%\315:&\0\3\221\20\7\211\350\322$L\302$+\15J\252\6\3\222\17\5\213'\206"
                "$\323\6%\263\15\12\0\3\223\11\5\213&\216}\4\3\224\21\7\211\350\322$L\302$+eI:"
                "\14\2\3\225\14\5\213&\216\341\220\204\305A\3\226\15\7\211h\206\265\71\255\16C\0\3\227\13\7\213"
                ")R\353pu\15\3\230\17\7\213\251\266J\252,\252\232d\331\4\3\231\10\1\213#\16\2\3\232\17"
                "\5\213'\62))iIT\311\264\0\3\233\20\7\211\350\322$L\302$+eI\252\6\3\234\22\7"
                "\213j\262(\213\262\244E\251(\25)\222\12\3\235\20\7\213)\322Q\311\244H\212\264D\134\3\3\236"
                "\14\6\213(\356\360\220S\207\1\3\237\15\7\213\251\266J\352\232d\331\4\3\240\12\7\213)\16\252_"
                "\3\3\241\15\5\213'\206$\263\15JX\4\3\243\14\6\213'.q\61\15\303a\3\244\13\7\211'"
                "\16Y\334\67\0\3\245\16\7\211(\322$\213\262J\32\267\1\3\246\22\7\213\351\302A\211\42)\222\42"
                "\251\62\210\31\0\3\247\17\7\211(\322$\253\244q\232d\225\64\3\250\20\7\213*\242H\212\244H\252"
                "\264\255q\6\3\251\15\7\213\251\266J\352\232d\311\1\3\252\13C\211#\222\60\352\27\0\3\253\20G"
                "\211\250\222\34J\223,\312*i\334\6\3\254\15%\213\347\352\310\240\271%C\0\3\255\16$\213\346\242"
                "X\211\206$\213\22\5\3\256\15\205[\347\352@b\322\334\302\6\3\257\12\42\213c\264\244S\0\3\260"
                "\15%\213\347\42%\315\274%\13\0\3\261\13\305\212g\6\315-\31\2\3\262\22\205[g\244J\224D"
                "I\242d\266A\11\213\0\3\263\15%Y&\62-)%Y\330\11\3\264\15%\213\247\244\64[\62\267"
                "d\1\3\265\15\304\212f\224hH\262(Q\0\3\266\16dk%\206\250\26e\215[\224\0\3\267\13"
                "%['\22\223\346\26\66\3\270\16%\213g\226\314\66\14\231-Y\0\3\271\11\302\212#\222N\1\3"
                "\272\15\305\212&\242%\322\222\250\222\5\3\273\17&\211f\322\70M\265$\213Z\302\0\3\274\14%["
                "'\62O\203\42\26\1\3\275\15\305\210&\62-)%Y\30\1\3\276\16dke\224\310\250d\305-"
                "J\0\3\277\13\305\212g\226\314-Y\0\3\300\17\307\210'\16I\26eQ\26eQ\30\3\301\15%"
                "[g\226\314mP\302\42\0\3\302\14\4kf\224H+nQ\2\3\303\16\306\212g\206-\311\222,"
                "\311\242\11\3\304\13\305\210%\6)lM\0\3\305\12\305\212'\62o\311\2\3\306\21\205[\247\302\332"
                "RQ\22%Q*[X\2\3\307\20%Y%\62-)%Y%JjZ\0\3\310\23\207Y\350\342"
                "Z\24I\221\24I\221T\31\304\270\6\3\311\17\307\212i\262$\212\244H\212\244\212\5\3\312\12\3\211"
                "#\222\60\352\26\3\313\13\5\213g\312\231\267d\1\3\314\15%\213\347\352\310\222\271%\13\0\3\315\14"
                "%\213\347\352@\346-Y\0\3\316\22'\213)\323\34\314\222(\222\42)\222*\26\0\3\317\10#\370"
                "$\222\0\4\1\16E\213f\312\303\30\16IX\34\4\4\2\23\10\211)\6\65\7r \331\264(\214"
                "\302(Y\0\4\3\13e\213\346\352\300\261\217\0\4\4\16\6\213\250\246L\35\224\64\316\242\5\4\5\14"
                "\4\213f\224H,J\211\2\4\6\10\1\213#\16\2\4\7\13C\211#\222\60\352\27\0\4\10\12\4"
                "\211\345\372\66$\0\4\11\26\13\213m\206\65L\303\64\34\242\60K\302,\11\63uH\0\4\12\24\11"
                "\213+\262\60\13\263p\30\224,\323\62-\323\206\4\4\13\22\10\211)\6\65\7r`\320\302(\214\302"
                "(\14\4\14\20f\213\350\302\34\312\246J\266E\335\222\60\4\16\22h\211\250\252:\30'a\326\224\352"
                "@\34\256\0\4\17\15Gk)R\277\16\203\226\206\0\4\20\20\7\211\350\322$L\302$+\15J\252"
                "\6\4\21\17\5\213'\206$\14\207$\263\15\12\0\4\22\17\5\213'\206$\323\6%\263\15\12\0\4"
                "\23\11\5\213&\216}\4\4\24\24Hi\250\6)\214\302(\214\302(\214\302d\70\313\1\4\25\14\5"
                "\213&\216\341\220\204\305A\4\26\22\11\213,\244HJ\212IuMjQ/Y\1\4\27\16\5\213g"
                "\226,\214\324PK\26\0\4\30\20\7\213)RqK\244H\212\224lT\3\4\31\22g\213\251\212:"
                "\224\212[\42ER\244d\243\32\4\32\17\5\213'\62))iIT\311\264\0\4\33\21\6\213h\6"
                "%K\262$K\262$K\62\61\4\34\22\7\213j\262(\213\262\244E\251(\25)\222\12\4\35\13\7"
                "\213)R\353pu\15\4\36\15\7\213\251\266J\352\232d\331\4\4\37\12\7\213)\16\252_\3\4 "
                "\15\5\213'\206$\263\15JX\4\4!\14\6\213\250\246Lm\316\242\5\4\42\13\7\211'\16Y\334"
                "\67\0\4#\20&y'B\61\311\222(K\302\264\246\1\4$\22\7\213\351\302A\211\42)\222\42\251"
                "\62\210\31\0\4%\17\7\211(\322$\253\244q\232d\225\64\4&\23Fk(\262$K\262$K\262"
                "$K\262dX\13\4'\13\6\213(B\307dP\33\4(\23\11\213+\262L\313\264L\313\264L\313"
                "\264l\70\4\4)\30Jk+\262JV\311*Y%\253d\225\254\62\34r$G\42\0\4*\21\10"
                "\211)\206\34\310\201\34\30\302\254\267!\1\4+\20\10\213*b\363\240i\221\26i\321\240\5\4,\15"
                "\5\213'\302\342\220d\266A\1\4-\16\6\213h\246,N\6\65\325\242\11\4.\23\12\213,\302)"
                "\253D\351\240J\251\224j\225p\2\4/\21\6\211\247\206$K\262$\213\206\250\222\211\1\4\60\13\305"
                "\212g\6\315-\31\2\4\61\16%\213'\223%\34\222\314-Y\0\4\62\15\304\212&\226hH\42i"
                "H\0\4\63\12\303\212$\206\250\23\0\4\64\14\6i\246\246\376\64$\241\30\4\65\15\304\212f\224h"
                "H\262(Q\0\4\66\16\307\212)\242J\333\226\224\222\246\2\4\67\13\304\212&\306D\314\206\4\4\70"
                "\15\305\212'\62iI\224d\322\2\4\71\17%\213g\242H\316\244%Q\222I\13\4:\14\304\212&"
                "\42%\221\222N\1\4;\16\305\210f\206$J\242$J\42-\4<\17\307\210h\262(KZ\224\212"
                "R\221\12\4=\14\305\212'\62m\30\62[\0\4>\13\305\212g\226\314-Y\0\4?\11\305\212'"
                "n\336\2\4@\15%['\206$s\33\224\260\10\4A\14\304\212f\224H+%\12\0\4B\12\305"
                "\210%\6)\354\4\4C\17&Y&B-j\11\305\64LC\0\4D\21\205[\247\302\332RQ\22"
                "%Q*[X\2\4E\14\305\210&\262\244\26fI-\4F\21\6k'\262$K\262$K\262d"
                "\30K\0\4G\12\304\212&\42S\262\25\4H\20\307\212*\242H\212\244H\212\244h\30\4\4I\22"
                "\10k*\242JT\211*Q%\252\14\203\134\2\4J\14\306\210'\326t\213\232\26\0\4K\16\307\212"
                ")Ru\310\244H\212\206,\4L\14\304\212&\262l\211\244!\1\4M\14\304\212f\224(\331\244D"
                "\1\4N\20\310\212*\262%\312\6M\312\244L[\0\4O\15\305\210\246\226(\211\242%\322\2\0";



#endif //ARDUINOMID_OPELFONTU8G_H
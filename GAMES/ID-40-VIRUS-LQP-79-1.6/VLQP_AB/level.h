#ifndef LEVEL_H
#define LEVEL_H

#include <Arduino.h>
#include "globals.h"
#include "bitmaps.h"
#include "door.h"

// constants /////////////////////////////////////////////////////////////////

#define LEVEL_WIDTH                   512
#define LEVEL_HEIGHT                  256

#define LEVEL_BLOCK_WIDTH             8
#define LEVEL_BLOCK_HEIGHT            4

#define BLOCK_WIDTH                   8
#define BLOCK_HEIGHT                  8

#define TILE_WIDTH                    8
#define TILE_HEIGHT                   8

#define FONT_TINY                     0
#define FONT_SMALL                    1
#define FONT_BIG                      2

#define DATA_TIMER                    0
#define DATA_SCORE                    1
#define DATA_LEVEL                    2

#define NUM_MAPS                      32
#define LEVEL_TO_START_WITH           1               // normal game starts with level 1
#define TOTAL_LEVEL_AMOUNT            (NUM_MAPS * 4)


// method prototypes /////////////////////////////////////////////////////////


void drawLevel();
uint8_t getTileType(unsigned int x, unsigned int y);
void drawNumbers(int16_t NumbersX, int16_t NumbersY, int16_t fontType, int timerOrScoreOrLevel);
void mapCollide(int& x, int& y, bool horizontal, int16_t& vel, int8_t w, int8_t h);

extern Door exitDoor;


// data //////////////////////////////////////////////////////////////////////


// format: <survivor1x> <survivor1y> <survivor2x> <survivor2y> <survivor3x> <survivor3y> <survivor4x> <survivor4y> <survivor5x> <survivor5y>
 const uint8_t survivorLocation[] = {
  24, 29,  4, 12, 47, 11,  2, 28, 58, 28, // MAP01
  31, 25,  3,  6, 60,  2, 12, 18, 45, 12, // MAP02
  38, 16, 16, 22, 50,  4,  2, 28, 56, 25, // MAP03
  47,  9, 19, 23, 60,  2,  8, 16, 28, 14, // MAP04
  55, 14,  6,  2, 44,  2,  2, 27, 18, 18, // MAP05
  59, 15,  2,  9, 45, 10, 11, 23, 28, 20, // MAP06
  60,  2,  2,  2, 33,  2,  2, 28, 59, 27, // MAP07
  42, 10,  4, 10, 31, 18, 20, 20, 46, 27, // MAP08
  8 ,  5, 52, 20, 35, 20, 16, 10, 58,  2, // MAP09
  57, 27, 19, 10, 37,  3, 59,  2,  2, 10, // MAP10
  56,  2, 41, 28,  2,  2, 40,  2, 23, 28, // MAP11
  60, 28, 42, 10,  2,  2, 21, 20, 36, 28, // MAP12
  60,  2, 51, 19, 35, 12,  2, 28,  2,  2, // MAP13
  18,  2,  5,  2, 29, 28, 51, 23, 38,  2, // MAP14
  55, 15, 24, 10, 44, 10,  2,  5,  2, 18, // MAP15
  34,  2,  2, 28, 29, 12, 60, 28,  2,  2, // MAP16
  19,  7,  1, 29, 43, 19, 61, 20, 11, 23, // MAP17
  43,  7, 28, 28, 50, 28, 17,  2,  8, 21, // MAP18
  50,  2, 23, 18, 60, 18, 10,  2,  2, 28, // MAP19
  42, 10, 11, 28, 31, 15, 11,  5, 20, 10, // MAP20
  60, 18, 47,  3, 23, 19, 15,  3,  2, 28, // MAP21
  19,  3, 56, 27,  9, 20, 56,  3, 39, 15, // MAP22
  3 , 27, 48, 13, 30,  4,  9,  2, 42, 20, // MAP23
  24, 10,  2, 28, 42, 19, 13, 19, 51,  7, // MAP24
  51,  7, 25, 28, 10, 10, 34, 10,  2, 28, // MAP25
  51, 23, 27, 28,  4,  4, 24, 15, 43,  7, // MAP26
  13, 13, 36, 18, 18,  2, 58,  4,  2, 28, // MAP27
  14,  2,  2, 28, 59, 27, 20, 18, 60,  2, // MAP28
  42,  5, 27, 19, 15, 14,  2, 28, 55, 21, // MAP29
  12,  5,  2, 18, 60, 28, 34, 13, 25, 18, // MAP30
  52, 10, 38, 18,  2, 28, 28,  2, 33,  5, // MAP31
  52, 18, 19, 10, 54,  3, 34,  3, 12, 22, // MAP32
};


//format: <player x> <player y> <exit x> <exit y>
 const uint8_t playerAndExitLocation[] =
{
  // first run
  56, 23, 21,  0,  //LEVEL001
  23, 10,  0, 18,  //LEVEL002
  2 ,  2, 62, 23,  //LEVEL003
  19,  7, 55,  0,  //LEVEL004
  31,  2,  0, 21,  //LEVEL005
  34, 10, 38, 30,  //LEVEL006
  55, 13, 56,  0,  //LEVEL007
  25, 13, 62, 28,  //LEVEL008
  36, 20, 18, 30,  //LEVEL009
  48, 13,  7,  0,  //LEVEL010
  5 , 21, 43,  0,  //LEVEL011
  4 ,  3,  2,  0,  //LEVEL012
  10, 20, 29,  0,  //LEVEL013
  44, 28,  0, 28,  //LEVEL014
  44, 10, 24, 30,  //LEVEL015
  29, 12, 50,  0,  //LEVEL016
  50,  6, 60,  0,  //LEVEL017
  3, 19, 33,  0,  //LEVEL018
  33, 10,  0,  2,  //LEVEL019
  51, 28, 22,  0,  //LEVEL020
  31,  3,  0, 18,  //LEVEL021
  39, 15, 15,  0,  //LEVEL022
  27, 18,  0,  6,  //LEVEL023
  3,  3, 28, 30,  //LEVEL024
  58, 27, 12,  0,  //LEVEL025
  3, 27, 62, 15,  //LEVEL026
  50, 13,  0,  4,  //LEVEL027
  14,  2,  2, 28,  //LEVEL028
  35,  2, 31, 30,  //LEVEL029
  59,  3, 11, 30,  //LEVEL030
  3, 12, 60,  0,  //LEVEL031
  35, 10, 19, 10,  //LEVEL032

  //second run
  2 , 28, 62, 28,  //LEVEL033
  36,  9, 36,  0,  //LEVEL034
  53, 22, 30, 30,  //LEVEL035
  26, 11, 62, 22,  //LEVEL036
  7 , 24, 56,  0,  //LEVEL037
  11, 23, 62, 28,  //LEVEL038
  14, 24,  0, 18,  //LEVEL039
  59,  2, 13, 30,  //LEVEL040
  17, 17,  2,  0,  //LEVEL041
  60,  2, 48, 30,  //LEVEL042
  60, 28, 26,  0,  //LEVEL043
  20, 20, 35,  0,  //LEVEL044
  3 ,  5,  3,  0,  //LEVEL045
  59, 28, 44, 30,  //LEVEL046
  9 , 11,  0, 11,  //LEVEL047
  50, 21,  0,  6,  //LEVEL048
  60, 28,  2,  0,  //LEVEL049
  60,  2,  0,  6,  //LEVEL050
  18, 13, 37, 30,  //LEVEL051
  11,  2, 51, 30,  //LEVEL052
  38, 22, 15,  0,  //LEVEL053
  47,  2, 62,  2,  //LEVEL054
  54, 25, 23, 30,  //LEVEL055
  11, 19,  0,  7,  //LEVEL056
  35, 10, 62, 18,  //LEVEL057
  27,  7, 33,  0,  //LEVEL058
  6,  2, 21, 30,  //LEVEL059
  19, 19,  0,  8,  //LEVEL060
  59, 28, 35,  0,  //LEVEL061
  36, 18,  0,  3,  //LEVEL062
  33,  3, 28,  0,  //LEVEL063
  3,  3, 35, 30,  //LEVEL064

  //third run
  17,  7, 59,  0,  //LEVEL065
  56, 22,  2, 30,  //LEVEL066
  24,  4,  0, 14,  //LEVEL067
  34, 20, 21,  0,  //LEVEL068
  21, 12, 25, 30,  //LEVEL069
  28, 20, 27,  0,  //LEVEL070
  51, 24, 62, 28,  //LEVEL071
  59, 28,  0,  3,  //LEVEL072
  59,  2, 62,  2,  //LEVEL073
  3 ,  5,  0, 28,  //LEVEL074
  24,  2, 17, 30,  //LEVEL075
  32, 25, 10,  0,  //LEVEL076
  11, 20,  3,  0,  //LEVEL077
  38,  2,  0, 27,  //LEVEL078
  2 , 18, 62, 28,  //LEVEL079
  2 ,  2, 62,  4,  //LEVEL080
  31,  8, 31, 30,  //LEVEL081
  33,  2, 43, 30,  //LEVEL082
  2, 28, 37,  0,  //LEVEL083
  31, 26,  0, 16,  //LEVEL084
  35, 11, 57,  0,  //LEVEL085
  2, 28, 31, 30,  //LEVEL086
  12, 15, 62, 18,  //LEVEL087
  42, 11, 27,  0,  //LEVEL088
  18, 18,  0,  9,  //LEVEL089
  43, 15, 47, 30,  //LEVEL090
  21, 28, 62, 18,  //LEVEL091
  35, 25, 50,  0,  //LEVEL092
  4, 14, 62, 27,  //LEVEL093
  23,  2,  0, 28,  //LEVEL094
  26, 12, 60, 30,  //LEVEL095
  35, 23,  3,  0,  //LEVEL096

  //fourth run
  35, 17, 19, 30,  //LEVEL097
  12, 13, 62, 12,  //LEVEL098
  23, 10, 43,  0,  //LEVEL099
  60, 28,  0,  7,  //LEVEL100
  43, 27, 31,  0,  //LEVEL101
  20,  6, 38, 30,  //LEVEL102
  31, 15, 26, 30,  //LEVEL103
  31, 12, 12,  0,  //LEVEL104
  2 , 28, 62, 28,  //LEVEL105
  31, 11,  8,  0,  //LEVEL106
  2 , 28, 62, 28,  //LEVEL107
  10,  2, 42, 30,  //LEVEL108
  25,  3, 10,  0,  //LEVEL109
  6 , 25, 58,  0,  //LEVEL110
  44, 28, 59,  0,  //LEVEL111
  59,  2, 18,  0,  //LEVEL112
  2,  2, 62,  7,  //LEVEL113
  25, 14, 62, 28,  //LEVEL114
  36, 28, 31,  0,  //LEVEL115
  56,  1, 18,  0,  //LEVEL116
  2,  2, 62, 13,  //LEVEL117
  31, 24,  0,  6,  //LEVEL118
  12, 15, 27, 30,  //LEVEL119
  58, 27, 12,  0,  //LEVEL120
  36, 18, 62, 18,  //LEVEL121
  59, 28,  0, 19,  //LEVEL122
  50, 18, 43,  0,  //LEVEL123
  28,  3, 31, 30,  //LEVEL124
  35,  2,  0,  4,  //LEVEL125
  46, 21, 51,  0,  //LEVEL126
  14, 18, 44, 30,  //LEVEL127
  4,  3, 62, 15,  //LEVEL128
};




 const uint8_t blocks[16][64] = {
  {
    //BLOCK 00
    11, 11, 11, 11, 11, 11, 11, 11,
    11,  6,  6,  6,  6,  6,  6,  6,
    11,  0,  0,  0,  0,  0,  0,  0,
    11,  0,  0,  0,  1,  0,  0,  0,
    11,  0,  1,  0,  0,  0,  1,  0,
    11,  0,  0,  0,  1,  0,  0,  0,
    11,  0,  1,  0,  0,  0,  4,  0,
    11,  0,  0,  0,  1,  0,  0,  0,
  }, {
    // BLOCK 01
    11, 11, 11, 11, 11, 11, 11, 11,
    6 , 6 , 6 , 6 , 6 , 6 , 6 , 6,
    0 , 0 , 0 , 0 , 0 , 0 , 0 , 0,
    3 , 0 , 0 , 0 , 1 , 0 , 0 , 0,
    0 , 0 , 1 , 0 , 0 , 0 , 1 , 0,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 0,
    0 , 0 , 1 , 0 , 0 , 0 , 1 , 0,
    1 , 0 , 0 , 0 , 3 , 0 , 0 , 0,
  }, {
    // BLOCK 02
    11, 11, 11, 11, 11, 11, 11, 11,
    6 , 6 , 6 , 6 , 6 , 6 , 6 , 11,
    0 , 0 , 0 , 0 , 0 , 0 , 0 , 11,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 11,
    0 , 0 , 4 , 0 , 0 , 0 , 0 , 11,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 11,
    0 , 0 , 1 , 0 , 0 , 0 , 0 , 11,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 11,
  }, {
    // BLOCK 03
    11, 0 , 1 , 0 , 0 , 0 , 1 , 0,
    11, 0 , 0 , 0 , 1 , 0 , 0 , 0,
    11, 0 , 1 , 0 , 0 , 0 , 1 , 0,
    11, 0 , 0 , 0 , 3 , 0 , 0 , 0,
    11, 0 , 1 , 0 , 0 , 0 , 1 , 0,
    11, 0 , 0 , 0 , 1 , 0 , 0 , 0,
    11, 0 , 1 , 0 , 0 , 0 , 1 , 0,
    11, 0 , 0 , 0 , 1 , 0 , 0 , 0,
  }, {
    // BLOCK 04
    0 , 0 , 1 , 0 , 0 , 0 , 1 , 0,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 0,
    0 , 0 , 1 , 0 , 0 , 0 , 1 , 0,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 0,
    0 , 0 , 1 , 0 , 0 , 0 , 1 , 0,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 0,
    0 , 0 , 3 , 0 , 0 , 0 , 1 , 0,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 0,
  }, {
    // BLOCK 05
    0 , 0 , 1 , 0 , 0 , 0 , 0 , 11,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 11,
    0 , 0 , 1 , 0 , 0 , 4 , 0 , 11,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 11,
    0 , 0 , 1 , 0 , 0 , 0 , 0 , 11,
    3 , 0 , 0 , 0 , 1 , 0 , 0 , 11,
    0 , 0 , 1 , 0 , 0 , 0 , 0 , 11,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 11,
  }, {
    // BLOCK 06
    11 , 0 , 1 , 0 , 0 , 0 , 1 , 0,
    11 , 0 , 0 , 0 , 1 , 0 , 0 , 0,
    11 , 0 , 1 , 0 , 0 , 0 , 1 , 0,
    11 , 0 , 0 , 0 , 4 , 0 , 0 , 0,
    11 , 0 , 1 , 0 , 0 , 0 , 1 , 0,
    11 , 0 , 0 , 0 , 1 , 0 , 0 , 0,
    11 , 0 , 0 , 0 , 0 , 0 , 0 , 0,
    11 , 11 , 11 , 11 , 11 , 11 , 11 , 11,
  }, {
    // BLOCK 07
    0 , 0 , 1 , 0 , 0 , 0 , 1 , 0,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 0,
    0 , 0 , 1 , 0 , 0 , 0 , 3 , 0,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 0,
    0 , 0 , 1 , 0 , 0 , 0 , 1 , 0,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 0,
    0 , 0 , 0 , 0 , 0 , 0 , 0 , 0,
    11 , 11 , 11 , 11 , 11 , 11 , 11 , 11,
  }, {
    // BLOCK 08
    0 , 0 , 1 , 0 , 0 , 0 , 0 , 11,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 11,
    0 , 0 , 1 , 0 , 0 , 0 , 0 , 11,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 11,
    0 , 0 , 1 , 0 , 0 , 0 , 0 , 11,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 11,
    0 , 0 , 0 , 0 , 0 , 0 , 0 , 11,
    11 , 11 , 11 , 11 , 11 , 11 , 11 , 11,
  }, {
    // BLOCK 09
    0 , 0 , 1 , 0 , 0 , 0 , 1 , 0,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 0,
    0 , 0 , 12 , 14 , 18 , 22 , 1 , 0,
    1 , 0 , 13 , 15 , 19 , 23 , 0 , 0,
    0 , 0 , 1 , 16 , 20 , 0 , 1 , 0,
    1 , 0 , 0 , 17 , 21 , 0 , 0 , 0,
    0 , 0 , 1 , 0 , 0 , 0 , 3 , 0,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 0,
  }, {
    // BLOCK 10
    2 , 2 , 2 , 2 , 2 , 2 , 2 , 2,
    2 , 24 , 26 , 2 , 2 , 24 , 26 , 2,
    2 , 25 , 27 , 2 , 2 , 25 , 27 , 2,
    2 , 2 , 2 , 2 , 2 , 2 , 2 , 2,
    2 , 2 , 2 , 2 , 5 , 2 , 2 , 2,
    2 , 24 , 26 , 2 , 2 , 24 , 26 , 2,
    2 , 25 , 27 , 2 , 2 , 25 , 27 , 2,
    2 , 2 , 2 , 2 , 2 , 2 , 2 , 2,
  }, {
    // BLOCK 11
    11 , 11 , 11 , 11 , 11 , 11 , 11 , 11,
    6 , 6 , 6 , 6 , 6 , 6 , 6 , 6,
    2 , 2 , 2 , 2 , 2 , 2 , 2 , 2,
    2 , 2 , 2 , 2 , 2 , 2 , 2 , 2,
    2 , 2 , 2 , 2 , 2 , 2 , 2 , 2,
    2 , 24 , 26 , 2 , 2 , 24 , 26 , 2,
    2 , 25 , 27 , 2 , 2 , 25 , 27 , 2,
    2 , 2 , 2 , 2 , 2 , 2 , 2 , 2,
  }, {
    // BLOCK 12
    2, 2 , 2 , 2 , 2 , 2 , 2 , 2,
    2 , 24 , 26 , 2 , 2 , 24 , 26 , 2,
    2 , 25 , 27 , 2 , 2 , 25 , 27 , 2,
    2 , 3 , 2 , 2 , 2 , 3 , 2 , 2,
    2 , 2 , 2 , 2 , 2 , 2 , 2 , 2,
    2 , 2 , 2 , 2 , 2 , 2 , 2 , 2,
    2 , 2 , 2 , 2 , 2 , 2 , 2 , 2,
    11 , 11 , 11 , 11 , 11 , 11 , 11 , 11,
  }, {
    // BLOCK 13
    2 , 2 , 2 , 2 , 2 , 2 , 2 , 2,
    1 , 2 , 3 , 2 , 2 , 2 , 4 , 2,
    2 , 2 , 2 , 2 , 2 , 2 , 2 , 2,
    2 , 2 , 2 , 2 , 2 , 2 , 2 , 2,
    2 , 2 , 2 , 2 , 2 , 2 , 2 , 3,
    2 , 5 , 2 , 2 , 2 , 2 , 2 , 2,
    2 , 2 , 2 , 2 , 4 , 2 , 2 , 2,
    2 , 2 , 2 , 2 , 2 , 2 , 2 , 2,
  }, {
    // BLOCK 14
    0 , 0 , 1 , 0 , 0 , 0 , 0 , 11,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 11,
    0 , 0 , 12 , 14 , 18 , 22 , 0 , 11,
    1 , 0 , 13 , 15 , 19 , 23 , 0 , 11,
    0 , 0 , 1 , 16 , 20 , 0 , 0 , 11,
    1 , 0 , 0 , 17 , 21 , 0 , 0 , 11,
    0 , 0 , 1 , 0 , 0 , 0 , 0 , 11,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 11,
  }, {
    // BLOCK 15
    11 , 11 , 11 , 11 , 11 , 11 , 11 , 11,
    6 , 38 , 37 , 37 , 37 , 37 , 36 , 6,
    0 , 39 , 39 , 39 , 35 , 35 , 35 , 0,
    1 , 39 , 39 , 39 , 35 , 35 , 35 , 0,
    0 , 32 , 33 , 33 , 33 , 33 , 34 , 0,
    1 , 28 , 29 , 30 , 31 , 30 , 31 , 0,
    0 , 7 , 8 , 9 , 10 , 9 , 10 , 0,
    1 , 0 , 0 , 0 , 1 , 0 , 0 , 0,
  }
};



 const uint8_t maps[][16] = {
  {
    // map 00
    0x01, 0x11, 0x11, 0x12,
    0x39, 0x5F, 0x4F, 0xF5,
    0x39, 0x54, 0x44, 0x45,
    0x67, 0x87, 0x77, 0x78
  }, {
    // map 01
    0x01, 0x11, 0x11, 0x12,
    0x35, 0xFF, 0x39, 0x9E,
    0x02, 0x47, 0x01, 0x45,
    0x67, 0x77, 0x77, 0x78
  }, {
    // map 02
    0x01, 0x11, 0x11, 0x12,
    0x35, 0xFF, 0x4F, 0xFE,
    0x02, 0x44, 0x40, 0x4E,
    0x67, 0x77, 0x77, 0x78,
  }, {
    // map 03
    0x0B, 0xBB, 0x11, 0x12,
    0x3D, 0xAD, 0x0F, 0x25,
    0x3D, 0xAA, 0x64, 0x85,
    0x6C, 0xCC, 0x77, 0x78,
  }, {
    // map 04
    0x0F, 0x1B, 0xB1, 0xF2,
    0x39, 0x3D, 0xD5, 0x95,
    0x39, 0x0B, 0xB2, 0x95,
    0x67, 0x7C, 0xC7, 0x78,
  }, {
    // map 05
    0x01, 0x11, 0x11, 0x12,
    0x3D, 0x3F, 0x02, 0xDE,
    0x3A, 0x67, 0x3E, 0xDE,
    0x6C, 0xCC, 0x77, 0x78,
  }, {
    // map 06
    0x0F, 0x12, 0x11, 0xF2,
    0x34, 0x94, 0x44, 0x9E,
    0x01, 0x14, 0x91, 0x12,
    0x67, 0x78, 0x77, 0x78,
  }, {
    // map 07
    0x01, 0x11, 0x11, 0x12,
    0x3F, 0x24, 0x40, 0xF5,
    0x34, 0x8B, 0xB6, 0x45,
    0x67, 0x77, 0x77, 0x78,
  }, {
    // map 08
    0x01, 0x11, 0x11, 0x12,
    0x3F, 0x14, 0x24, 0x25,
    0x39, 0x46, 0x84, 0x85,
    0x67, 0x77, 0x77, 0x78,
  }, {
    // map 09
    0x01, 0x11, 0x11, 0x12,
    0x30, 0x1F, 0xF1, 0x95,
    0x39, 0x77, 0x77, 0x85,
    0x67, 0x77, 0x77, 0x78,
  }, {
    // map 10
    0x02, 0xF2, 0xF2, 0xF2,
    0x34, 0x4E, 0x44, 0x4E,
    0x3E, 0x44, 0x4E, 0x45,
    0x68, 0x78, 0x78, 0x78,
  }, {
    // map 11
    0x00, 0x11, 0x11, 0x12,
    0x31, 0xF3, 0xF0, 0xF5,
    0x36, 0x73, 0x46, 0x7E,
    0x67, 0x77, 0x76, 0x78,
  }, {
    // map 12
    0x00, 0x11, 0x11, 0x12,
    0x33, 0xF6, 0x8F, 0x25,
    0x36, 0x77, 0x78, 0x85,
    0x67, 0x77, 0x77, 0x78,
  }, {
    // map 13
    0x0F, 0x0F, 0x0F, 0x12,
    0x34, 0x34, 0x34, 0x45,
    0x31, 0x34, 0x42, 0xAE,
    0x67, 0x77, 0x68, 0xC8,
  }, {
    // map 14
    0x01, 0x11, 0x11, 0x12,
    0x68, 0xF1, 0xF2, 0x9E,
    0x34, 0x47, 0x78, 0x9E,
    0x67, 0x77, 0x77, 0x78,
  }, {
    // map 15
    0x0F, 0x0F, 0x0F, 0x02,
    0x37, 0x37, 0x37, 0x3E,
    0x39, 0x49, 0x49, 0x4E,
    0x67, 0x77, 0x77, 0x78
  }, {
    // map 16
    0x0B, 0xBB, 0xBB, 0xF2,
    0x3A, 0xA9, 0x9A, 0xDE,
    0x3A, 0xA9, 0x9A, 0xDE,
    0x6C, 0xCC, 0xCC, 0xC8
  }, {
    // map 17
    0x02, 0x12, 0x1B, 0xF2,
    0x33, 0x55, 0x5A, 0xA5,
    0x3E, 0xE9, 0xEA, 0x05,
    0x68, 0x78, 0x7C, 0x68
  }, {
    // map 18
    0x00, 0x11, 0x11, 0x02,
    0x33, 0x3E, 0x11, 0x15,
    0x34, 0xFF, 0x40, 0x92,
    0x66, 0x77, 0x76, 0x78
  }  , {
    // map 19
    0x0B, 0x01, 0x12, 0xF2,
    0x31, 0x29, 0x90, 0x4E,
    0x34, 0x19, 0x91, 0x45,
    0x6C, 0x67, 0x78, 0xC8
  }, {
    // map 20
    0x0F, 0xFF, 0xFF, 0xF2,
    0x34, 0x44, 0x44, 0x45,
    0x3F, 0xFF, 0x9F, 0xF2,
    0x67, 0x77, 0x77, 0x78
  }, {
    // map 21
    0x01, 0x11, 0x11, 0x12,
    0x39, 0x99, 0x99, 0x95,
    0x39, 0x99, 0x99, 0x95,
    0x67, 0x77, 0x77, 0x78
  }, {
    // map 22
    0x01, 0x11, 0x11, 0xF2,
    0x3E, 0x44, 0x43, 0x95,
    0x3E, 0xBB, 0x30, 0xF2,
    0x67, 0xCC, 0x67, 0x78
  }, {
    // map 23
    0x01, 0x11, 0x11, 0xB2,
    0x33, 0xF1, 0xF2, 0xA5,
    0x30, 0xF1, 0xF2, 0xA5,
    0x66, 0x77, 0x77, 0xC8
  }, {
    // map 24
    0x01, 0x11, 0x11, 0xB2,
    0x30, 0x19, 0x02, 0xA5,
    0x33, 0x09, 0x25, 0xF2,
    0x67, 0x87, 0x77, 0x78
  }, {
    // map 25
    0x0B, 0xBF, 0xBB, 0xB2,
    0x3A, 0xAD, 0xAA, 0xA5,
    0x3A, 0xAD, 0xAA, 0xA5,
    0x6C, 0xCC, 0xCC, 0xC8
  }, {
    // map 26
    0x0F, 0x0F, 0x11, 0x12,
    0x34, 0x39, 0xED, 0x35,
    0x31, 0x01, 0x2D, 0x02,
    0x67, 0x76, 0x77, 0x78
  }, {
    // map 27
    0x01, 0xF1, 0x11, 0x12,
    0x33, 0x44, 0x99, 0x95,
    0x31, 0x13, 0x1F, 0x15,
    0x67, 0x76, 0x77, 0x88
  }, {
    // map 28
    0x01, 0x1B, 0xB0, 0x12,
    0x39, 0xEA, 0xAF, 0x9E,
    0x39, 0xEA, 0xAD, 0x9E,
    0x67, 0x7C, 0xC7, 0x78
  }, {
    // map 29
    0x02, 0xBB, 0x2F, 0x12,
    0x31, 0xDD, 0x04, 0xE5,
    0x04, 0x21, 0x21, 0x25,
    0x68, 0x78, 0x78, 0x78
  }, {
    // map 30
    0x01, 0x12, 0x11, 0x12,
    0x31, 0x11, 0x11, 0x25,
    0x31, 0xF1, 0x1F, 0x15,
    0x67, 0x78, 0x77, 0x78
  }, {
    // map 31
    0x00, 0xF1, 0x0B, 0x02,
    0x33, 0xB3, 0xBD, 0x25,
    0x36, 0xB3, 0xF3, 0x2E,
    0x67, 0x77, 0x76, 0x78
  }
};


const uint8_t  tileset[] =
{
  // width, height,
  8, 8,

  // TILESET 1
  // TILE 00
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  // TILE 01
  0x00, 0x00, 0x30, 0x00, 0x20, 0x10, 0x00, 0x00,
  // TILE 02
  0x04, 0x80, 0x00, 0x00, 0x20, 0x00, 0x02, 0x00,
  // TILE 03
  0x08, 0x14, 0x08, 0xe2, 0x45, 0x12, 0x28, 0x10,
  // TILE 04
  0x0c, 0x0e, 0x6a, 0xf6, 0xb0, 0x90, 0x60, 0x00,
  // TILE 05
  0x1e, 0xb3, 0xdf, 0xdf, 0xb3, 0x93, 0x5f, 0x0e,
  // TILE 06
  0x00, 0xcf, 0x30, 0x03, 0x04, 0x18, 0x64, 0x83,
  // TILE 07
  0xaa, 0x15, 0xbf, 0x00, 0x7f, 0x43, 0x40, 0x40,
  // TILE 08
  0x40, 0x40, 0x40, 0x7f, 0x00, 0xbf, 0x15, 0xaa,
  // TILE 09
  0x3f, 0xbf, 0x20, 0xa1, 0x20, 0xa0, 0x20, 0xa0,
  // TILE 10
  0x20, 0xa0, 0x20, 0xa0, 0x20, 0xa0, 0x3f, 0xbf,
  // TILE 11
  0x6d, 0xfb, 0xbf, 0x57, 0xed, 0xbd, 0xdb, 0xee,
  // TILE 12
  0x80, 0x40, 0x60, 0x80, 0x64, 0x0c, 0xf0, 0x40,
  // TILE 13
  0x09, 0x2a, 0x12, 0x24, 0x27, 0x48, 0xb3, 0xcc,
  // TILE 14
  0x3c, 0x08, 0xc4, 0xb6, 0x24, 0x92, 0x48, 0x17,
  // TILE 15
  0x8e, 0x55, 0x68, 0x92, 0x64, 0x0c, 0xf1, 0x42,
  // TILE 16
  0x09, 0x2a, 0x12, 0x24, 0x27, 0x48, 0xb3, 0xcc,
  // TILE 17
  0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x3f, 0xff,
  // TILE 18
  0xb0, 0x53, 0x6c, 0x82, 0x64, 0x0c, 0xf1, 0x42,
  // TILE 19
  0x3f, 0x08, 0xc4, 0xb6, 0x24, 0x92, 0x48, 0x03,
  // TILE 20
  0x7e, 0xe1, 0x5c, 0x42, 0x39, 0x25, 0x51, 0x0a,
  // TILE 21
  0x3d, 0x7f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  // TILE 22
  0x3e, 0x08, 0xc4, 0xb4, 0x20, 0x90, 0x00, 0x00,
  // TILE 23
  0x5e, 0xe1, 0x5c, 0x42, 0x39, 0x25, 0x51, 0x0a,
  // TILE 24
  0x00, 0xf8, 0x04, 0xe6, 0xa2, 0x62, 0x02, 0xc2,
  // TILE 25
  0x20, 0x07, 0x54, 0x09, 0xa8, 0x09, 0x50, 0x13,
  // TILE 26
  0x06, 0x86, 0x86, 0x8c, 0x1c, 0xf8, 0xf0, 0x00,
  // TILE 27
  0x50, 0x17, 0xa2, 0x23, 0xa0, 0x7f, 0x7f, 0x00,
  // TILE 28
  0xaa, 0x54, 0xfe, 0x02, 0xfa, 0x0a, 0x0a, 0x0a,
  // TILE 29
  0x0a, 0x0a, 0x0a, 0xfa, 0x02, 0xfe, 0x54, 0xaa,
  // TILE 30
  0xfe, 0xfe, 0x06, 0x26, 0x86, 0x46, 0x26, 0x06,
  // TILE 31
  0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xfe, 0xfe,
  // TILE 32
  0x6f, 0xdf, 0xb8, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7,
  // TILE 33
  0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb7,
  // TILE 34
  0xb7, 0xb7, 0xb7, 0xb7, 0xb7, 0xb8, 0xdf, 0x6f,
  // TILE 35
  0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff,
  // TILE 36
  0xe3, 0xe3, 0xe3, 0xe3, 0xc3, 0x07, 0xfe, 0xfc,
  // TILE 37
  0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3, 0xe3,
  // TILE 38
  0xfc, 0xfe, 0x07, 0xc3, 0xe3, 0xe3, 0xe3, 0xe3,
  // TILE 39
  0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff,

  // TILESET 2
  // TILE 00
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  // TILE 01
  0x00, 0x1c, 0x38, 0x00, 0x18, 0x0c, 0x00, 0x00,
  // TILE 02
  0x04, 0x80, 0x00, 0x00, 0x20, 0x00, 0x02, 0x00,
  // TILE 03
  0x10, 0x28, 0x12, 0x45, 0xe2, 0x08, 0x14, 0x08,
  // TILE 04
  0x02, 0x0e, 0x16, 0x2a, 0x24, 0x28, 0x30, 0x00,
  // TILE 05
  0x02, 0x50, 0x20, 0x10, 0x2e, 0x0e, 0x0c, 0x00,
  // TILE 06
  0x00, 0x06, 0x88, 0xff, 0xf7, 0x6b, 0x8c, 0x02,
  // TILE 07
  0xac, 0xee, 0xce, 0x00, 0x3f, 0x7f, 0x7f, 0x7f,
  // TILE 08
  0xff, 0xfb, 0xf3, 0xff, 0x00, 0xae, 0xee, 0xea,
  // TILE 09
  0x6e, 0xee, 0xe0, 0x6f, 0x68, 0xe8, 0xe8, 0xef,
  // TILE 10
  0xc3, 0xdc, 0xd0, 0xe8, 0xaf, 0xa0, 0xea, 0xce,
  // TILE 11
  0xa6, 0x4c, 0xd1, 0xef, 0xd1, 0xab, 0x6c, 0xa6,
  // TILE 12
  0x08, 0x11, 0x26, 0x1c, 0x0a, 0x50, 0x30, 0x65,
  // TILE 13
  0x04, 0x0c, 0xcb, 0x49, 0x38, 0x30, 0x34, 0x32,
  // TILE 14
  0xa2, 0x92, 0x04, 0x28, 0x11, 0xe3, 0x9a, 0x04,
  // TILE 15
  0xb2, 0xe1, 0xe3, 0xe6, 0xcc, 0xf8, 0x7f, 0xf0,
  // TILE 16
  0x08, 0x10, 0x10, 0x33, 0x7f, 0xde, 0xbf, 0xff,
  // TILE 17
  0x00, 0x00, 0x80, 0xe0, 0x38, 0xbf, 0x5d, 0x3e,
  // TILE 18
  0x80, 0x64, 0x1c, 0x18, 0xff, 0x20, 0x10, 0x6c,
  // TILE 19
  0x70, 0xeb, 0x7c, 0xc6, 0xe3, 0x71, 0x18, 0x8c,
  // TILE 20
  0xff, 0xbf, 0xdf, 0x39, 0x1c, 0x0e, 0x03, 0x01,
  // TILE 21
  0xde, 0x1d, 0x7f, 0xb8, 0x60, 0xc0, 0x80, 0x00,
  // TILE 22
  0x32, 0x69, 0xc4, 0x40, 0x34, 0x10, 0x0e, 0x01,
  // TILE 23
  0x86, 0xc3, 0x40, 0x7c, 0x22, 0x22, 0x10, 0x08,
  // TILE 24
  0x04, 0x80, 0x00, 0x30, 0x30, 0x30, 0x60, 0xfe,
  // TILE 25
  0x20, 0x00, 0x50, 0x00, 0xa0, 0x00, 0x40, 0x3f,
  // TILE 26
  0xfe, 0x60, 0xc0, 0xc0, 0xc0, 0x00, 0x02, 0x00,
  // TILE 27
  0x7f, 0x80, 0x80, 0x00, 0xa0, 0x00, 0x02, 0x00,
  // TILE 28
  0xef, 0xef, 0xad, 0x01, 0xf3, 0xfb, 0xfb, 0xfa,
  // TILE 29
  0xe2, 0x02, 0xe6, 0xf6, 0x02, 0xf6, 0xec, 0xee,
  // TILE 30
  0xe6, 0xee, 0x03, 0xfb, 0x0a, 0x0a, 0x0b, 0xfb,
  // TILE 31
  0x13, 0x13, 0x13, 0x0b, 0xfb, 0x03, 0xce, 0xec,
  // TILE 32
  0x7e, 0x7f, 0x3f, 0x00, 0x7f, 0xff, 0x1f, 0x00,
  // TILE 33
  0x7e, 0x7f, 0x3b, 0x00, 0x6f, 0xff, 0xfb, 0x00,
  // TILE 34
  0x00, 0x7f, 0x7f, 0x07, 0x00, 0x1f, 0x7f, 0x7f,
  // TILE 35
  0x00, 0xdf, 0xf7, 0x3c, 0x00, 0xfb, 0xef, 0x3f,
  // TILE 36
  0x00, 0xf3, 0xff, 0xfe, 0x00, 0xf8, 0xde, 0x8c,
  // TILE 37
  0xfe, 0xce, 0xff, 0x00, 0x3f, 0xfe, 0xff, 0x00,
  // TILE 38
  0xfc, 0x7e, 0xff, 0x00, 0xfc, 0xff, 0xe7, 0x00,
  // TILE 39
  0x7f, 0xff, 0xe7, 0x00, 0x3f, 0xfd, 0xf7, 0x00,

  // TILESET 3
  // TILE 00
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  // TILE 01
  0x00, 0x00, 0x08, 0x10, 0x00, 0x30, 0x08, 0x00,
  // TILE 02
  0x00, 0x02, 0x00, 0x20, 0x00, 0x00, 0x00, 0x04,
  // TILE 03
  0x10, 0x28, 0x10, 0x00, 0x00, 0x08, 0x14, 0x08,
  // TILE 04
  0x00, 0x00, 0x10, 0x28, 0x24, 0x38, 0x30, 0x00,
  // TILE 05
  0x1c, 0x1e, 0x36, 0x72, 0x3e, 0x72, 0x1c, 0x00,
  // TILE 06
  0x54, 0xa3, 0x14, 0xa9, 0x5e, 0x0b, 0xd0, 0x2a,
  // TILE 07
  0xff, 0x6f, 0x10, 0xff, 0x90, 0xef, 0x81, 0xfe,
  // TILE 08
  0x90, 0xef, 0x81, 0xfe, 0x90, 0xff, 0x00, 0xfe,
  // TILE 09
  0x10, 0xef, 0x00, 0xdf, 0x10, 0xb0, 0x10, 0xd0,
  // TILE 10
  0x1f, 0xd0, 0x10, 0xb0, 0x10, 0xdf, 0x01, 0xfe,
  // TILE 11
  0x7f, 0xf6, 0xdf, 0x7a, 0xfc, 0xbe, 0xeb, 0x46,
  // TILE 12
  0x20, 0x70, 0x4c, 0x40, 0x90, 0x28, 0x40, 0x80,
  // TILE 13
  0x05, 0x02, 0x82, 0x4e, 0x31, 0x40, 0x50, 0x49,
  // TILE 14
  0x00, 0x00, 0x00, 0x50, 0xbc, 0x00, 0x10, 0x7f,
  // TILE 15
  0xc6, 0xf8, 0xe0, 0xae, 0x53, 0xf0, 0xb8, 0x9e,
  // TILE 16
  0x00, 0x00, 0x01, 0x03, 0x07, 0xff, 0xf9, 0xf6,
  // TILE 17
  0x00, 0x80, 0xc0, 0x40, 0xe0, 0xf0, 0x7b, 0x3f,
  // TILE 18
  0xc0, 0xc0, 0x60, 0x10, 0x08, 0x04, 0x04, 0x02,
  // TILE 19
  0x03, 0x01, 0x00, 0x00, 0x80, 0x80, 0xc3, 0xe4,
  // TILE 20
  0xee, 0x07, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00,
  // TILE 21
  0x5f, 0x7f, 0xf0, 0xc0, 0x80, 0x00, 0x00, 0x00,
  // TILE 22
  0x80, 0x00, 0x0e, 0x90, 0xa0, 0xc0, 0x00, 0x00,
  // TILE 23
  0x7c, 0x33, 0x10, 0x18, 0x18, 0x0f, 0x04, 0x02,
  // TILE 24
  0x20, 0x60, 0x4e, 0xf0, 0x60, 0x02, 0x8c, 0xf0,
  // TILE 25
  0x00, 0x01, 0x02, 0x21, 0x83, 0xc7, 0x76, 0xb9,
  // TILE 26
  0x38, 0x9c, 0x87, 0x94, 0xe0, 0xc0, 0xa0, 0x04,
  // TILE 27
  0xff, 0x7c, 0x83, 0x21, 0x00, 0x00, 0x00, 0x04,
  // TILE 28
  0xfe, 0xee, 0x10, 0xfc, 0x14, 0xec, 0x04, 0xfc,
  // TILE 29
  0x14, 0xec, 0x04, 0xfc, 0x14, 0xfc, 0x00, 0xfe,
  // TILE 30
  0x10, 0xee, 0x00, 0xf6, 0x10, 0x1a, 0x10, 0x16,
  // TILE 31
  0xf0, 0x16, 0x10, 0x1a, 0x10, 0xf6, 0x00, 0xfe,
  // TILE 32
  0xff, 0xff, 0xc0, 0xd5, 0xd9, 0xd5, 0xd5, 0xd5,
  // TILE 33
  0xe6, 0xd5, 0xd5, 0xd5, 0xd9, 0xd5, 0xd5, 0xd5,
  // TILE 34
  0xe6, 0xd5, 0xd5, 0xd5, 0xd9, 0xd5, 0xd5, 0xff,
  // TILE 35
  0x66, 0x55, 0x55, 0x55, 0x99, 0x55, 0x55, 0xff,
  // TILE 36
  0x65, 0x55, 0x55, 0x55, 0x99, 0x55, 0x55, 0xff,
  // TILE 37
  0x65, 0x55, 0x55, 0x55, 0x99, 0x55, 0x55, 0x55,
  // TILE 38
  0xff, 0xff, 0x01, 0x55, 0x99, 0x55, 0x55, 0x55,
  // TILE 39
  0xff, 0xff, 0x00, 0x55, 0x99, 0x55, 0x55, 0x55,
};


#endif

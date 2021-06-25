#pragma once

#include "../Utils/Arduboy2Ext.h"
#include "../Utils/Constants.h"
#include "../Fonts/Font4x6.h"


//-------------------------------------------------------------------------------------
// Introduction ..
//-------------------------------------------------------------------------------------

#define LEVEL_0_WIDTH 16
#define LEVEL_0_HEIGHT 8

const uint8_t  level0Map[] = {
0x5F, 0x51, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x08, 0x41, 0xA8, 0x41, 0x03, 0x33, 0x8A, 0x33, 0x00
};

const uint8_t  level0StartingPositions[4] = {
4, 6, 11, 6, 
};

const uint8_t  level0EndingPositions[4] = {
3, 6, 12, 6, 
};


//-------------------------------------------------------------------------------------
// Level 1 - First Customers
//-------------------------------------------------------------------------------------

char const level1Name[]  = "First Customers";

#define LEVEL_1_WIDTH   34
#define LEVEL_1_HEIGHT  15

const uint8_t  level1Map[] = {
0x6F, 0x53, 0x6F, 0x61, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0A, 0x41, 0x26, 0x0F, 0x0C, 
0x77, 0x0F, 0x0E, 0x61, 0x71, 0x61, 0x0F, 0x01, 0x41, 0x25, 0x0A, 0x71, 0x0B, 0x25, 0x41, 0x76, 
0x0A, 0x71, 0x01, 0xB1, 0x09, 0x76, 0x01, 0x61, 0x71, 0x61, 0x09, 0x63, 0x71, 0x63, 0x0A, 0x61, 
0x71, 0x61, 0x01, 0x32, 0x71, 0x3D, 0x71, 0x3E, 0x71, 0x32, 0x02, 0x71, 0x0D, 0x71, 0x0E, 0x71, 
0x04, 0x71, 0x0D, 0x71, 0x0E, 0x71, 0x04, 0x71, 0x0D, 0x71, 0x0E, 0x71, 0x02, 0xE2, 0x71, 0xED, 
0x71, 0xEE, 0x71, 0xE2, 0x00
};

const uint8_t  level1StartingPositions[6] = {
1, 7,    14, 4,   32, 7,
};

const uint8_t  level1EndingPositions[6] = {
0, 7,    13, 4,   33, 7,
};


//-------------------------------------------------------------------------------------
// Level 2 - Underground
//-------------------------------------------------------------------------------------

char const level2Name[]  = "Underground";

#define LEVEL_2_WIDTH   34
#define LEVEL_2_HEIGHT  15

const uint8_t  level2Map[] = {
0x6F, 0x53, 0x6F, 0x61, 0x0F, 0x0F, 0x0F, 0x0F, 0x08, 0xA4, 0x41, 0xA9, 0x05, 0xA6, 0x41, 0xA2, 
0x03, 0xA3, 0x1E, 0x05, 0x19, 0x33, 0x13, 0x8E, 0x05, 0x8F, 0x81, 0x04, 0x51, 0x0D, 0x86, 0x08, 
0x82, 0x04, 0x51, 0x0F, 0x0C, 0x82, 0x04, 0x51, 0x04, 0x22, 0xF1, 0x21, 0x0D, 0xA2, 0x04, 0x82, 
0xA1, 0x41, 0xA2, 0x81, 0x04, 0x74, 0x0D, 0x82, 0x04, 0x87, 0xA1, 0x0B, 0xA1, 0x03, 0xA2, 0x41, 
0xA2, 0x82, 0x04, 0x88, 0x0B, 0x81, 0x03, 0x87, 0x04, 0x88, 0x0B, 0x81, 0x01, 0xB1, 0x01, 0x87, 
0x04, 0x88, 0xA5, 0x41, 0xA5, 0x81, 0x63, 0x87, 0xA1, 0x41, 0xA2, 0x8F, 0x85, 0x63, 0x8C, 0x00};

const uint8_t  level2StartingPositions[12] = {
3, 3,    1, 9,   11, 13,    24, 3,    23, 10,    29, 13,
};

const uint8_t  level2EndingPositions[12] = {
4, 3,    2, 9,   12, 13,    25, 3,    24, 10,    30, 13,
};


//-------------------------------------------------------------------------------------
// Level 3 - Golden Arches
//-------------------------------------------------------------------------------------

char const level3Name[]  = "Golden Arches";

#define LEVEL_3_WIDTH   34
#define LEVEL_3_HEIGHT  15

const uint8_t  level3Map[] = {
0x6E, 0x71, 0x54, 0x71, 0x68, 0x01, 0xC1, 0x01, 0xC1, 0x01, 0x61, 0x0F, 0x0D, 0xC1, 0x01, 0xC1, 
0x01, 0xC1, 0x0F, 0x0E, 0xC1, 0x01, 0xC1, 0x01, 0xC1, 0x03, 0xC1, 0x01, 0xC1, 0x0A, 0x22, 0xB1, 
0x21, 0x08, 0xC1, 0x05, 0xC1, 0x01, 0xC1, 0x01, 0xC1, 0x01, 0xC1, 0x09, 0x74, 0x07, 0x21, 0xC1, 
0x25, 0xC1, 0x01, 0xC1, 0x01, 0xC1, 0x01, 0xC1, 0x0F, 0x05, 0x78, 0xC1, 0x05, 0xC1, 0x0F, 0x0C, 
0xC1, 0x25, 0xC1, 0x21, 0x0F, 0x0B, 0x78, 0x07, 0x21, 0x41, 0x22, 0x07, 0x21, 0x41, 0x26, 0x0F, 
0x74, 0x07, 0x68, 0x0F, 0x0B, 0x51, 0x06, 0x61, 0x0F, 0x0B, 0x51, 0x06, 0x61, 0x21, 0x41, 0x26, 
0x08, 0x21, 0xF1, 0x21, 0x07, 0x51, 0x06, 0x69, 0xA7, 0x21, 0x73, 0x21, 0xA6, 0x51, 0x24, 0x41, 
0x21, 0x69, 0x17, 0x75, 0x16, 0x68, 0x00};

const uint8_t  level3StartingPositions[8] = {
0, 12,    15, 8,   26, 8,    30,13,
};

const uint8_t  level3EndingPositions[8] = {
1, 12,    16, 8,   27, 8,    31,13,
};


//-------------------------------------------------------------------------------------
// Level 4 Shipwreck Rarr
//-------------------------------------------------------------------------------------

char const level4Name[]  = "Shipwreck Rarr";

#define LEVEL_4_WIDTH   34
#define LEVEL_4_HEIGHT  15

const uint8_t  level4Map[] = {
0x81, 0x71, 0x81, 0x71, 0x81, 0x71, 0x81, 0x71, 0x81, 0x71, 0x81, 0x71, 0x81, 0x71, 0x81, 0x71, 
0x81, 0x71, 0x81, 0x71, 0x81, 0x71, 0x81, 0x71, 0x81, 0x71, 0x81, 0x71, 0x81, 0x71, 0x53, 0x71, 
0x0F, 0x0E, 0x71, 0x03, 0x71, 0x0F, 0x0E, 0x71, 0x03, 0x71, 0x0F, 0x0E, 0x71, 0x53, 0x71, 0x0E, 
0x81, 0x0F, 0x05, 0x22, 0xB1, 0x21, 0x09, 0x81, 0x21, 0x41, 0x22, 0x0F, 0x01, 0x64, 0x09, 0x85, 
0x0F, 0x09, 0x23, 0x41, 0x21, 0x81, 0xD4, 0x0F, 0x09, 0x86, 0x0F, 0x0D, 0xD5, 0x81, 0x0F, 0x0F, 
0x03, 0x81, 0x0F, 0x01, 0xF1, 0x02, 0x81, 0x23, 0x41, 0x29, 0x81, 0x21, 0x41, 0x2A, 0x81, 0x03, 
0x71, 0x02, 0x31, 0x81, 0x9C, 0x81, 0x9B, 0x81, 0x34, 0x71, 0x34, 0x8F, 0x89, 0x35, 0x71, 0x32, 
0xE3, 0x8F, 0x87, 0xE6, 0x71, 0xE2, 0x00};

const uint8_t  level4StartingPositions[8] = {
3, 11,    11, 7,    15, 5,    15, 11, 
};

const uint8_t  level4EndingPositions[8] = {
4, 11,    12, 7,    16, 5,    16, 11, 
};


//-------------------------------------------------------------------------------------
// Level 5 - At The Beach
//-------------------------------------------------------------------------------------

char const level5Name[]  = "At The Beach";

#define LEVEL_5_WIDTH   34
#define LEVEL_5_HEIGHT  15

const uint8_t  level5Map[] = {
0x6F, 0x54, 0x6F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0E, 0x25, 0x41, 0x21, 0x0F, 0x21, 0x41, 0x23, 
0x07, 0x82, 0x65, 0x0F, 0xC5, 0x07, 0xD2, 0x81, 0x64, 0x09, 0x21, 0x0F, 0x04, 0xD1, 0x71, 0x63, 
0x09, 0x81, 0x21, 0x0F, 0x04, 0x71, 0x81, 0x62, 0x0A, 0x81, 0x21, 0x0F, 0x03, 0x71, 0xD1, 0x82, 
0x0B, 0x81, 0x23, 0x41, 0x25, 0x09, 0x71, 0x01, 0xD2, 0x0C, 0x89, 0x22, 0x07, 0x71, 0x0F, 0x81, 
0x06, 0x81, 0x01, 0x82, 0x21, 0x06, 0x71, 0x0D, 0x22, 0x81, 0x26, 0x81, 0x23, 0x81, 0x24, 0xB1, 
0x21, 0x71, 0x21, 0x41, 0x23, 0x04, 0x34, 0xCF, 0xCB, 0x34, 0xE4, 0xCF, 0xCB, 0xE4, 0x00};

const uint8_t  level5StartingPositions[8] = {
9, 4,    8, 9,    25, 3,    25,12, 
};

const uint8_t  level5EndingPositions[8] = {
10, 4,    9, 9,    26, 3,    26,12, 
};


//-------------------------------------------------------------------------------------
// Level 6 - Got Spikes?
//-------------------------------------------------------------------------------------

char const level6Name[]  = "Got Spikes?";

#define LEVEL_6_WIDTH   34
#define LEVEL_6_HEIGHT  15

const uint8_t  level6Map[] = {
0x6E, 0x71, 0x54, 0x71, 0x6F, 0x08, 0x62, 0xD3, 0x71, 0x04, 0x71, 0xDA, 0x65, 0x09, 0x61, 0x03, 0xD1, 0x04, 0xD1, 0x0A, 0xD1, 0x64, 0x41, 0x24, 0x04, 0x61, 0x21, 0x0F, 0x04, 0x64, 0x75, 0x04, 0x62, 0x21, 0x09, 0x23, 0x06, 0x64, 0x09, 0x63, 0x21, 0x08, 0x73, 0x22, 0x04, 0x64, 0x08, 0x21, 0x64, 0x37, 0x64, 0x72, 0x21, 0x04, 0x63, 0x03, 0x25, 0x71, 0x64, 0xE7, 0x66, 0x71, 0x04, 0x63, 0x03, 0x75, 0x62, 0xD9, 0x68, 0x04, 0x63, 0x0F, 0x05, 0x66, 0x04, 0x21, 0x63, 0x0F, 0x0E, 0x21, 0x71, 0x63, 0x09, 0x25, 0xB1, 0x24, 0x09, 0x21, 0x71, 0x64, 0xE9, 0x7A, 0x21, 0x07, 0x21, 0x71, 0x65, 0x79, 0x6A, 0x71, 0xE7, 0x71, 0x6F, 0x6F, 0x69, 0x00};

const uint8_t  level6StartingPositions[2] = {
2, 3,  
};

const uint8_t  level6EndingPositions[2] = {
1, 3,    
};


//-------------------------------------------------------------------------------------
// Level 7 - Floating Islands
//-------------------------------------------------------------------------------------

char const level7Name[]  = "Floating Islands";

#define LEVEL_7_WIDTH   34
#define LEVEL_7_HEIGHT  15

const uint8_t  level7Map[] = {
0x61, 0x54, 0x66, 0x7A, 0x6E, 0x04, 0x61, 0x05, 0x51, 0x08, 0x71, 0x0D, 0xD1, 0x04, 0xD1, 0x05, 0x51, 0x08, 0x71, 0x0F, 0x09, 0x51, 0x08, 0x71, 0x03, 0xA4, 0x41, 0xA3, 0x0D, 0x51, 0x26, 0x41, 0x21, 0x71, 0x03, 0x18, 0x0D, 0x7A, 0x04, 0x86, 0x0F, 0x0E, 0x84, 0x04, 0xA1, 0x41, 0xA4, 0x0F, 0x0D, 0x15, 0x81, 0x05, 0xA5, 0x41, 0xA4, 0x0D, 0x85, 0x05, 0x81, 0x1A, 0x81, 0x0C, 0x83, 0x08, 0x8A, 0x04, 0xA2, 0xB1, 0xA1, 0xF1, 0xA1, 0x03, 0x71, 0x01, 0x71, 0x0A, 0x71, 0x04, 0x71, 0x06, 0x81, 0x14, 0x81, 0x03, 0x71, 0x31, 0x71, 0x3A, 0x71, 0x34, 0x71, 0x37, 0x84, 0x34, 0x71, 0x01, 0x71, 0x0A, 0x71, 0x04, 0x71, 0x07, 0x71, 0x02, 0x71, 0x04, 0x71, 0xE1, 0x71, 0xEA, 0x71, 0xE4, 0x71, 0xE7, 0x71, 0xE2, 0x71, 0xE4, 0x00};

const uint8_t  level7StartingPositions[8] = {
0, 7,    17, 4,    15, 8,    29,3,
};

const uint8_t  level7EndingPositions[8] = {
1, 7,    18, 4,    16, 8,    28,3,
};


//-------------------------------------------------------------------------------------
// Level 8 - The Forest
//-------------------------------------------------------------------------------------

char const level8Name[]  = "The Forest";

#define LEVEL_8_WIDTH   34
#define LEVEL_8_HEIGHT  15

const uint8_t  level8Map[] = {
0x69, 0x54, 0x6F, 0x66, 0x0F, 0x0F, 0x01, 0xA1, 0x0F, 0x0F, 0x02, 0xA1, 0x81, 0x07, 0xA1, 0x09, 0xA1, 
0x0E, 0x11, 0x81, 0xA2, 0x05, 0x11, 0x09, 0x81, 0xA1, 0x0E, 0x81, 0x12, 0x05, 0x81, 0xA2, 0x07, 0x81, 
0x11, 0x09, 0xA4, 0x41, 0x81, 0x05, 0xA2, 0x81, 0x12, 0x05, 0xA2, 0x81, 0xA3, 0x07, 0x15, 0x81, 0x05, 
0x12, 0x81, 0x07, 0x12, 0x81, 0x13, 0x0C, 0x81, 0x07, 0x81, 0x09, 0x81, 0x0F, 0x81, 0xA2, 0x05, 0x81, 
0x41, 0xA3, 0x02, 0xA3, 0x81, 0x0C, 0xA1, 0xB1, 0xA1, 0x81, 0x12, 0x01, 0xA3, 0x41, 0x81, 0x14, 0x02, 
0x13, 0x81, 0x41, 0xA4, 0x07, 0x13, 0x81, 0x03, 0x14, 0x81, 0x09, 0x81, 0x15, 0x0A, 0x81, 0x07, 0x81, 
0x09, 0x81, 0x0F, 0x81, 0x02, 0xA5, 0x81, 0xA9, 0x81, 0xAF, 0x81, 0xA2, 0x6F, 0x6F, 0x64, 0x00};

const uint8_t  level8StartingPositions[8] = {
3, 10,    7, 9,    17, 10,    29, 5,
};

const uint8_t  level8EndingPositions[8] = {
4, 10,    6, 9,    16, 10,    30, 5,
};


//-------------------------------------------------------------------------------------
// Level 9 - Friendly Invader
//-------------------------------------------------------------------------------------

char const level9Name[]  = "Friendly Invader";

#define LEVEL_9_WIDTH   34
#define LEVEL_9_HEIGHT  15

const uint8_t  level9Map[] = {
0x6E, 0x71, 0x53, 0x71, 0x6F, 0x61, 0x0F, 0x07, 0x6C, 0x0F, 0x08, 0x6B, 0x41, 0x25, 0x05, 0xC1, 0x05, 0xC1, 0x0B, 0x65, 0x76, 0x06, 0xC1, 0x03, 0xC1, 0x0E, 0x63, 0xD6, 0x05, 0xC7, 0x0E, 0x62, 0x0A, 0xC2, 0x01, 0xC3, 0x01, 0xC2, 0x0D, 0x62, 0x09, 0xCB, 0x04, 0x41, 0x23, 0x04, 0x62, 0x21, 0xB1, 0x21, 0x06, 0xC1, 0x01, 0xC7, 0x01, 0xC1, 0x04, 0x74, 0x54, 0x62, 0x73, 0x06, 0xC1, 0x01, 0xC1, 0x05, 0xC1, 0x01, 0xC1, 0x04, 0x71, 0xD3, 0x04, 0x62, 0xD3, 0x09, 0xC2, 0x01, 0xC2, 0x07, 0x71, 0x07, 0x62, 0x0F, 0x08, 0x61, 0x71, 0x07, 0x62, 0x06, 0x62, 0x0D, 0x63, 0x71, 0x07, 0x62, 0x21, 0x41, 0x24, 0x62, 0x71, 0x25, 0xF1, 0x25, 0x71, 0x63, 0x71, 0x21, 0x41, 0x25, 0x62, 0x76, 0x62, 0x7D, 0x63, 0x78, 0x61, 0x00};

const uint8_t  level9StartingPositions[8] = {
2, 3,    1, 13,    26, 7,    28, 13,
};

const uint8_t  level9EndingPositions[8] = {
1, 3,    2, 13,    25, 7,    27, 13,
};


//-------------------------------------------------------------------------------------
// Level 10 Pharaps Revenge
//-------------------------------------------------------------------------------------

char const level10Name[]  = "Pharaps Revenge";

#define LEVEL_10_WIDTH   34
#define LEVEL_10_HEIGHT  15

const uint8_t  level10Map[] = {
0x6E, 0x71, 0x55, 0x71, 0x6D, 0x0F, 0x0F, 0x0F, 0x0F, 0x08, 0xA1, 0x41, 0xA6, 0x07, 0x85, 0x06, 0xA1, 0xF1, 0xA4, 0xB1, 0xA1, 0x17, 0x81, 0x06, 0x81, 0x05, 0x81, 0x05, 0x81, 0x17, 0x87, 0x06, 0x81, 0x02, 0xC1, 0x01, 0xC1, 0x02, 0x81, 0x05, 0x88, 0x05, 0x51, 0x06, 0x81, 0x01, 0xC2, 0x01, 0xC2, 0x01, 0x81, 0x05, 0x51, 0x04, 0x83, 0x05, 0x51, 0x06, 0x81, 0x01, 0xC2, 0x01, 0xC2, 0x01, 0x81, 0x05, 0x51, 0x05, 0x82, 0x05, 0x51, 0x06, 0x81, 0x02, 0xC1, 0x01, 0xC1, 0x02, 0x81, 0x05, 0x51, 0x05, 0x82, 0x04, 0x85, 0x04, 0x81, 0x05, 0x81, 0x04, 0x84, 0x04, 0x82, 0x04, 0x81, 0x08, 0x81, 0x01, 0x81, 0x01, 0x81, 0x01, 0x81, 0x07, 0x81, 0x04, 0x82, 0x04, 0x81, 0x08, 0x81, 0x01, 0x81, 0x01, 0x81, 0x01, 0x81, 0x07, 0x81, 0x04, 0x82, 0x04, 0x81, 0x08, 0x87, 0x07, 0x81, 0x04, 0x82, 0xA1, 0x41, 0xA2, 0x81, 0x21, 0x41, 0x2F, 0x23, 0x41, 0x21, 0x81, 0xA2, 0x41, 0xA1, 0x8F, 0x8F, 0x85, 0x00};

const uint8_t  level10StartingPositions[10] = {
0, 3,   1, 13,   6, 13,   27, 13,   32, 13,
};

const uint8_t  level10EndingPositions[10] = {
1, 3,   2, 13,   7, 13,   26, 13,   31, 13,
};



//-------------------------------------------------------------------------------------
// Level 11 Rock And Fly
//-------------------------------------------------------------------------------------

char const level11Name[]  = "Rock And Fly";

#define LEVEL_11_WIDTH   34
#define LEVEL_11_HEIGHT  15

const uint8_t  level11Map[] = {
0x8F, 0x85, 0x73, 0x85, 0x71, 0x54, 0x71, 0x82, 0xD4, 0x81, 0x09, 0x81, 0x32, 0x71, 0x01, 0xF1, 0x01, 0x71, 0x33, 0x81, 0x06, 0x81, 0xD1, 0x0F, 0x83, 0x03, 0x86, 0x04, 0x82, 0x0F, 0x0B, 0x82, 0x04, 0x82, 0x0F, 0x0F, 0x02, 0x82, 0x05, 0xA1, 0x04, 0x41, 0xA3, 0x0F, 0x02, 0xA1, 0x82, 0x04, 0xA1, 0x81, 0xA1, 0x03, 0x14, 0x0F, 0x02, 0x83, 0x54, 0x83, 0x03, 0x84, 0x09, 0xA5, 0x41, 0xA2, 0x83, 0xA1, 0x03, 0x83, 0x03, 0xD4, 0x03, 0xA1, 0x05, 0x18, 0x84, 0x04, 0x82, 0x0A, 0x81, 0x55, 0x8C, 0x05, 0x81, 0xA1, 0x09, 0x81, 0x05, 0xD7, 0x85, 0x05, 0x82, 0x09, 0x81, 0xA1, 0x0C, 0x84, 0x05, 0x82, 0x22, 0xB1, 0x22, 0x04, 0x82, 0x0C, 0x84, 0xA4, 0x41, 0x82, 0x61, 0x73, 0x61, 0xA4, 0x82, 0xA7, 0x41, 0xA3, 0x8F, 0x8F, 0x87, 0x00};

const uint8_t  level11StartingPositions[8] = {
5, 13,    12, 5,    26, 13,    28, 7,
};

const uint8_t  level11EndingPositions[8] = {
6, 13,    11, 5,    27, 13,    29, 7,
};


//-------------------------------------------------------------------------------------

static const uint8_t MAX_NUMBER_OF_LEVELS       = 11;
const uint8_t *levelMaps[] =                    { level0Map, level1Map, level2Map, level3Map, level4Map, level5Map, level6Map, level7Map, level8Map, level9Map, level10Map, level11Map  };
const uint8_t *levelStartingPositions[] =       { level0StartingPositions, level1StartingPositions, level2StartingPositions, level3StartingPositions, level4StartingPositions, level5StartingPositions, level6StartingPositions, level7StartingPositions, level8StartingPositions, level9StartingPositions, level10StartingPositions, level11StartingPositions };
const uint8_t *levelEndingPositions[] =         { level0EndingPositions, level1EndingPositions, level2EndingPositions, level3EndingPositions, level4EndingPositions, level5EndingPositions, level6EndingPositions, level7EndingPositions, level8EndingPositions, level9EndingPositions, level10EndingPositions, level11EndingPositions };

const LevelDefinition  levelInit[MAX_NUMBER_OF_LEVELS + 1] = { 

// Level width   Level Height,   Level     Level       Player     Player    Player     Fares      Name     Number Of     Level      Level       Internal 
//                               X Offset  Y Offset    X Pos      Y Pos    Init Fuel  Required   Offset    Positions     Gate L     Gate R    Gate Interval
{ LEVEL_0_WIDTH, LEVEL_0_HEIGHT,       0,        0,       28,       45,       200,       0,         0,         2,           6,         9,          0    },
{ LEVEL_1_WIDTH, LEVEL_1_HEIGHT,     -83,       -1,       56,       28,       200,       4,         6,         3,          14,        18,          0    },
{ LEVEL_2_WIDTH, LEVEL_2_HEIGHT,     -99,        0,       56,       21,       200,       3,        16,         6,          15,        17,        500    }, //3
{ LEVEL_3_WIDTH, LEVEL_3_HEIGHT,       0,      -56,       24,       37,       200,       4,        12,         4,          15,        18,          600    },
{ LEVEL_4_WIDTH, LEVEL_4_HEIGHT,    -107,      -56,       56,       29,       200,       4,        10,         4,          30,        32,          400    },
{ LEVEL_5_WIDTH, LEVEL_5_HEIGHT,     -36,      -41,       56,       28,       200,       3,        12,         4,          15,        18,          0    },
{ LEVEL_6_WIDTH, LEVEL_6_HEIGHT,       0,        0,       29,       21,       200,       0,        16,         1,          15,        18,          0    },
{ LEVEL_7_WIDTH, LEVEL_7_HEIGHT,     -39,      -33,       56,       28,       200,       4,         5,         4,           1,         4,          600    },
{ LEVEL_8_WIDTH, LEVEL_8_HEIGHT,    -144,      -56,       59,       45,       200,       4,        16,         4,           9,        12,          0    },
{ LEVEL_9_WIDTH, LEVEL_9_HEIGHT,     -58,       -1,       56,       28,       200,       4,         5,         4,          15,        17,          600    },
{ LEVEL_10_WIDTH, LEVEL_10_HEIGHT,   -75,        0,       56,       13,       200,       4,         6,         5,          15,        17,          600    },
{ LEVEL_11_WIDTH, LEVEL_11_HEIGHT,  -140,      -25,       56,       28,       200,       4,        16,         4,          29,        32,          600    },
};

char const * const levelNames[]  = {
  level1Name,
  level2Name,
  level3Name,
  level4Name,
  level5Name,
  level6Name,
  level7Name,
  level8Name,
  level9Name,
  level10Name,
  level11Name,
};


#pragma once

namespace Images {

  #ifndef DEBUG
    const uint8_t  Ppot_Buttons[] = {
    36, 8,
    0x0e, 0x1f, 0x1f, 0x1f, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x0e, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0e, 0x1f, 0x00, 0x04, 0x0e, 0x1f, 0x00, 
    };
  #else
    const uint8_t  Ppot_Buttons[] = {
    0x00 ,0x07, 0x3d
    };
  #endif  
  
  #ifndef DEBUG
    const uint8_t  Ppot_ButtonUp[] = {
    14, 16,
    0xa7, 0xc7, 0xa7, 0xc7, 0xa7, 0xc7, 0xa7, 0xc7, 0xa7, 0xc7, 0xa7, 0xc7, 0xa7, 0x00, 
    0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 
    };
  #else
    const uint8_t  Ppot_ButtonUp[] = {
    0x00 ,0x07, 0x3d
    };
  #endif  
  
  #ifndef DEBUG
    const uint8_t  Ppot_ButtonDown[] = {
    14, 16,
    0xbe, 0xbd, 0xbe, 0xbd, 0xbe, 0xbd, 0xbe, 0xbd, 0xbe, 0xbd, 0xbe, 0xbd, 0xbe, 0x00, 
    0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 
    };
  #else
    const uint8_t  Ppot_ButtonDown[] = {
    0x00 ,0x07, 0x3d
    };
  #endif  

  #ifndef DEBUG
    const uint8_t  Ppot_Caption[] = {
    78, 8,
    0x0f, 0x0d, 0x07, 0x02, 0x00, 0x0f, 0x05, 0x0f, 0x0a, 0x00, 0x0f, 0x0d, 0x09, 0x00, 0x02, 0x0b, 0x0d, 0x00, 0x02, 0x0b, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x0d, 0x07, 0x02, 0x00, 0x0f, 0x0f, 0x08, 0x08, 0x00, 0x0e, 0x03, 0x03, 0x0e, 0x00, 0x03, 0x0e, 0x0e, 0x03, 0x00, 0x00, 0x00, 0x06, 0x09, 0x0b, 0x06, 0x00, 0x0f, 0x02, 0x03, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0f, 0x0f, 0x01, 0x0e, 0x03, 0x03, 0x0e, 0x00, 0x0f, 0x0d, 0x07, 0x02, 0x00, 0x0f, 0x0d, 0x09, 
    };
  #else
    const uint8_t  Ppot_Caption[] = {
    0x00 ,0x07, 0x3d
    };
  #endif 
  
  const uint8_t  Ppot_Loading[] = {
  33, 8,
  0x0f, 0x0f, 0x08, 0x08, 0x00, 0x06, 0x09, 0x0b, 0x06, 0x00, 0x0e, 0x03, 0x03, 0x0e, 0x00, 0x0f, 0x09, 0x0f, 0x06, 0x00, 0x0f, 0x0f, 0x00, 0x0f, 0x02, 0x03, 0x0f, 0x00, 0x0e, 0x0f, 0x09, 0x0d, 0x00, 
  };

  #ifndef DEBUG
    const uint8_t  PressAandB[] = {
    68, 16,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0x7e, 0xc7, 0xeb, 0xed, 0xeb, 0xc7, 0x7e, 0xbc, 0x00, 0x00, 0x3c, 0x2c, 0x00, 0x38, 0x14, 0x38, 0x00, 0x08, 0x24, 0x10, 0x00, 0x04, 0x38, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0x7e, 0xc1, 0xd5, 0xd5, 0xd5, 0xcb, 0x7e, 0xbc, 0x00, 0x00, 0x3c, 0x10, 0x3c, 0x00, 0x38, 0x14, 0x38, 0x00, 0x3c, 0x14, 0x28, 0x00, 0x3c, 0x24, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    };
  #else
    const uint8_t  PressAandB[] = {
    0x01 ,0x01, 0x01
    };
  #endif 

  #ifndef DEBUG
    const uint8_t  PressAandB_Mask[] = {
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    };
  #else
    const uint8_t  PressAandB_Mask[] = {
    0x01,
    };
  #endif 

}
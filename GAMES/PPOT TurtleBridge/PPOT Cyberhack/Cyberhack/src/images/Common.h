#pragma once

namespace Images {

    const uint8_t  Common[] = {
    14, 8,
    0x00, 0x18, 0x10, 0xc0, 0x06, 0x22, 0xe6, 0x86, 0x06, 0x18, 0x5e, 0x94, 0x00, 0x00, //L0 .. 3
    0x00, 0x00, 0x68, 0x00, 0x15, 0x70, 0x45, 0x84, 0x1a, 0x18, 0x53, 0x8c, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xd8, 0x06, 0x22, 0xe6, 0x9a, 0x1a, 0x10, 0x4e, 0x80, 0x00, 0x00, 
    0x00, 0x00, 0x18, 0xd0, 0x06, 0x72, 0x46, 0x06, 0x0a, 0x28, 0x42, 0x0c, 0x00, 0x00, 

    0x00, 0x00, 0x94, 0x5e, 0x18, 0x06, 0x86, 0xe6, 0x22, 0x06, 0xc0, 0x10, 0x18, 0x00, //R0 .. 3
    0x00, 0x00, 0x8c, 0x53, 0x18, 0x1a, 0x84, 0x45, 0x70, 0x15, 0x00, 0x68, 0x00, 0x00, 
    0x00, 0x00, 0x80, 0x4e, 0x10, 0x1a, 0x9a, 0xe6, 0x22, 0x06, 0xd8, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x0c, 0x42, 0x28, 0x0a, 0x06, 0x46, 0x72, 0x06, 0xd0, 0x18, 0x00, 0x00,
    };

    const uint8_t  Common_Mask[] = {
    0x18, 0x3c, 0xf8, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x9c, 0x00, //L0 .. 3
    0x00, 0xe8, 0xfc, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0x8c, 0x00,
    0x00, 0x00, 0xd8, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xce, 0x80, 0x00,
    0x00, 0x18, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x5f, 0x0c, 0x00, 

    0x00, 0x9c, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xf8, 0x3c, 0x18, //R0 .. 3
    0x00, 0x8c, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xfc, 0xe8, 0x00,
    0x00, 0x80, 0xce, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xd8, 0x00, 0x00, 
    0x00, 0x0c, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x18, 0x00, 
    };

};
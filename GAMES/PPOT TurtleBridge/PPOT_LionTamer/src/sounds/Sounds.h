#pragma once
#include <ArduboyTones.h>
#include "ArduboyNewTonesPitches.h"

namespace Sounds {

    const uint16_t Title[]  = {
        NOTE_FS5,496, NOTE_GS5,328, NOTE_AS5,246, NOTE_REST,257, NOTE_GS5,246, NOTE_REST,257,
        NOTE_AS5,160, NOTE_B5,496, NOTE_AS5,328, NOTE_GS5,162, NOTE_REST,341,
        NOTE_FS5,162, NOTE_REST,341, NOTE_GS5,160, NOTE_AS5,328, NOTE_CS5,162, NOTE_REST,341,
        NOTE_CS5,162, NOTE_REST,341, NOTE_CS5,160, NOTE_REST,12, NOTE_CS5,480,
        TONES_END
    };

    const uint16_t LionBlocked[]  = {
        NOTE_A4,125, NOTE_A3,125, TONES_END 
    };

    const uint16_t LionEscaped[]  = {
        NOTE_B5,212, NOTE_F5,212, NOTE_A5,212, NOTE_B5,212, NOTE_A5,212, NOTE_F5,212, NOTE_E6,212,
        NOTE_REST,212, NOTE_E6,212, NOTE_B5,212, NOTE_D6,212, NOTE_E6,212, NOTE_D6,212, NOTE_B5,159, 
        NOTE_REST,53, NOTE_B5,212, NOTE_REST,212, 
        TONES_END
    };

    const uint16_t Roar[]  = {
        NOTE_B2, 15,  NOTE_C2, 15,  NOTE_B2, 15,  NOTE_C2, 15,  NOTE_B2, 15,  NOTE_C2, 15,  NOTE_B2, 15,  NOTE_C2, 15,  
        NOTE_B2, 15,  NOTE_C2, 15,  NOTE_B2, 15,  NOTE_C2, 15,  NOTE_B2, 15,  NOTE_C2, 15,  NOTE_B2, 15,  NOTE_C2, 15,  
        NOTE_C3, 15,  NOTE_C2, 15,  NOTE_C3, 15,  NOTE_E2, 15,  NOTE_C3, 15,  NOTE_E2, 15,  NOTE_C3, 15,  NOTE_E2, 15,  
        NOTE_C3, 15,  NOTE_E2, 15,  NOTE_C3, 15,  NOTE_E2, 15,  NOTE_C3, 15,  NOTE_E2, 15,  NOTE_C3, 15,  NOTE_E2, 15,  
        NOTE_C3H, 15,  NOTE_C4H, 15,  NOTE_C3H, 15,  NOTE_C4H, 15,  NOTE_C3H, 15,  NOTE_C4H, 15,  NOTE_C3H, 15,  NOTE_C4H, 15,  
        NOTE_C3H, 15,  NOTE_C4H, 15,  NOTE_C3H, 15,  NOTE_C4H, 15,  NOTE_C3H, 15,  NOTE_C4H, 15,  NOTE_C3H, 15,  NOTE_C4H, 15,  
        NOTE_C3H, 15,  NOTE_C4H, 15,  NOTE_C3H, 15,  NOTE_C4H, 15,  NOTE_C3H, 15,  NOTE_C4H, 15,  NOTE_C3H, 15,  NOTE_C4H, 15,  
        NOTE_C3H, 15,  NOTE_C4H, 15,  NOTE_C3H, 15,  NOTE_C4H, 15,  NOTE_C3H, 15,  NOTE_C4H, 15,  NOTE_C3H, 15,  NOTE_C4H, 15,  
        TONES_END
    };

}

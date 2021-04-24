#pragma once

namespace Sounds {

  const uint16_t PackageDelivered[] PROGMEM = { 220,50, 440,50, 880,50, TONES_END };

  const uint16_t PackagePickedUp[] PROGMEM = { 440,50, 880,50, TONES_END };

  const uint16_t PackageNotDelivered[] PROGMEM = { 440,50, 180,50, TONES_END };

  const uint16_t Turtle[] PROGMEM = { 30, 50, 50, 50, TONES_END };

  const uint16_t Drowning[] PROGMEM = {
    440,50, 420,50, 400,50, 380,50, 360,50, 340,50, 320,50, 300,50,
    280,50, 260,50, 240,50, 220,50, 200,50, 180,50, 160,50, 140,50,
    120,50, 100,50, 80,50, NOTE_REST,10, 80,50, NOTE_REST,20, 80,50, NOTE_REST,40,
    80,50, NOTE_REST,60, 80,50, NOTE_REST,90, NOTE_REST,130, 80,50, NOTE_REST,180, 80,50,
    NOTE_REST,240, NOTE_REST,310, 80,50, NOTE_REST,390, 80,50,
    TONES_END
  };

  const uint16_t Score0[] PROGMEM = {
    NOTE_C4,250, NOTE_A4,250, NOTE_G4,250, NOTE_A4,250, NOTE_C4,250, NOTE_A4,125, NOTE_G4,375,  NOTE_A4,250,
    NOTE_DS4,250, NOTE_C5,250, NOTE_AS4,250, NOTE_C5,250, NOTE_DS4,250, NOTE_C5,125, NOTE_AS4,375, NOTE_C5,250,
    NOTE_F4,250, NOTE_F5,250, NOTE_DS5,250, NOTE_F5,250, NOTE_GS4,250, NOTE_F5,125, NOTE_DS5,375, NOTE_F5,250,
    NOTE_C5,125, NOTE_C5,125, NOTE_C5,125, NOTE_C5,125, NOTE_AS4,250, NOTE_C5,250, NOTE_REST,250, NOTE_C5,125,
    NOTE_C5,125, NOTE_C5,125, NOTE_C5,125,
    TONES_END
  };

  const uint16_t Score1[] PROGMEM = {
    NOTE_REST,340, NOTE_B5,180, NOTE_REST,330, NOTE_C6,180, NOTE_REST,330, NOTE_A5,180, NOTE_REST,330, NOTE_A5,180,
    NOTE_REST,159, NOTE_B5,180, NOTE_REST,159, NOTE_B5,436, NOTE_REST,74, NOTE_C6,180, NOTE_REST,330, NOTE_A5,180,
    NOTE_REST,159, NOTE_F5,340, NOTE_REST,18, NOTE_F5,170, NOTE_REST,18, NOTE_E5,170, NOTE_REST,93, NOTE_D5,866,
    NOTE_REST,750,

    NOTE_REST,340, NOTE_B5,180, NOTE_REST,330, NOTE_C6,180, NOTE_REST,330, NOTE_A5,180, NOTE_REST,330, NOTE_A5,180,
    NOTE_REST,159, NOTE_B5,180, NOTE_REST,159, NOTE_B5,436, NOTE_REST,74, NOTE_C6,180, NOTE_REST,330, NOTE_A5,180,
    NOTE_REST,159, NOTE_F5,340, NOTE_REST,18, NOTE_F5,170, NOTE_REST,18, NOTE_E5,170, NOTE_REST,93, NOTE_D5,866,
    NOTE_REST,750,

    TONES_END
  };

  const uint16_t * const Scores[] PROGMEM = {
    Score0,
    Score1,
  };

}
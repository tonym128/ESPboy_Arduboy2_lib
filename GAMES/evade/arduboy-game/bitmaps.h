﻿#ifndef BITMAPS_H
#define BITMAPS_H

/*
 *  File: bitmaps.h
 *  Purpose: Stores bitmap images used in Evade game.
 *  Author: Modus Create
 */

// Draw a bitmap at a given location given supplied bitmap array and frame
// number for those with animation frames.
void drawBitmap(byte x, byte y, const uint8_t *bitmap, uint8_t frame) {
  unsigned int frame_offset;
  uint8_t width = pgm_read_byte(bitmap),
          height = pgm_read_byte(++bitmap);

  bitmap++;
  if (frame > 0) {
    frame_offset = (width * ( height / 8 + ( height % 8 == 0 ? 0 : 1)));
    // sprite plus mask uses twice as much space for each frame
    bitmap += frame * frame_offset;
  }
  arduboy.drawBitmap(x, y, bitmap, width, height, 1);
}

 const unsigned char playerShip[] = {
  // width, height
  16, 16, 
  0x90, 0xF0, 0xB0, 0x30, 0xF0, 0xB0, 0xA0, 0xC0, 0xA0, 0xA0, 0xA0, 0xC0, 0xA0, 0xC0, 0x00, 0x40, 
  0x08, 0x1C, 0x0C, 0x0E, 0x0F, 0x0C, 0x04, 0x04, 0x05, 0x01, 0x05, 0x05, 0x01, 0x04, 0x00, 0x00,
  0x84, 0xCC, 0x9C, 0x3C, 0xFC, 0x8C, 0x88, 0xC8, 0x68, 0x60, 0x48, 0xC8, 0x40, 0xC8, 0x00, 0x80, 
  0x11, 0x39, 0x1C, 0x1E, 0x1F, 0x18, 0x08, 0x09, 0x0B, 0x03, 0x09, 0x09, 0x01, 0x09, 0x00, 0x00, 
  0xA2, 0xC7, 0x9E, 0x36, 0xF6, 0x86, 0x84, 0xC4, 0x64, 0x60, 0x44, 0xC4, 0x40, 0xC4, 0x00, 0x80, 
  0x45, 0xE3, 0x79, 0x6C, 0x6F, 0x61, 0x21, 0x23, 0x26, 0x06, 0x22, 0x23, 0x02, 0x23, 0x00, 0x01,
  0x88, 0x9C, 0x38, 0x78, 0xF8, 0x18, 0x10, 0x90, 0xD0, 0xC0, 0x90, 0x90, 0x80, 0x90, 0x00, 0x00,
  0x21, 0x33, 0x39, 0x3C, 0x3F, 0x31, 0x11, 0x13, 0x16, 0x06, 0x12, 0x13, 0x02, 0x13, 0x00, 0x01,
  0x10, 0x38, 0x30, 0x70, 0xF0, 0x30, 0x20, 0x20, 0xA0, 0x80, 0xA0, 0xA0, 0x80, 0x20, 0x00, 0x00,
  0x09, 0x0F, 0x0D, 0x0C, 0x0F, 0x0D, 0x05, 0x03, 0x05, 0x05, 0x05, 0x03, 0x05, 0x03, 0x00, 0x02,
};

 const unsigned char playerBulletA [] = {
  12, 8,
  0x18, 0x18, 0x3C, 0x3C, 0x7E, 0x66, 0xC3, 0x81, 0xC3, 0x66, 0x3C, 0x18,
};

 const unsigned char playerBulletB [] = {
  6, 2,
  0x03, 0x03, 0x03, 0x03, 0x03, 0x03
};

 const unsigned char enemyBullet [] = {
  5, 6,
  0x0C, 0x12, 0x2D, 0x00, 0x0C,
};

 const unsigned char modusLogo[] = {
  124, 51,  
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0x80, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8,
  0xF8, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0,
  0xE0, 0xE0, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0, 0xE0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xE0, 0xF0, 0xF0,
  0xF8, 0xF8, 0xF8, 0xFC, 0xFC, 0xFC, 0xFE, 0xFE, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F,
  0xFF, 0xFE, 0xFE, 0xFE, 0xFE, 0xFC, 0x7C, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x60, 0xF8, 0xFC, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x9F, 0xDF, 0xCF, 0xE7, 0xE6, 0x8E, 0x1E, 0x3F,
  0x7F, 0x7F, 0x3F, 0x3F, 0x9F, 0xDF, 0xCF, 0xEF, 0xE7, 0xF7, 0xF7, 0xE7, 0xCF, 0x9F, 0x3F, 0xFF,
  0xFF, 0xFF, 0xE6, 0xE0, 0xF8, 0xFC, 0xFE, 0xFF, 0xFF, 0x3F, 0x1F, 0x9F, 0xCF, 0xCF, 0xEF, 0xEF,
  0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xCF, 0xDC, 0x9C, 0x3E, 0x3E, 0x7F, 0x3F, 0xBF, 0x9F, 0xDF,
  0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xF8, 0x70, 0x78, 0x7E, 0x3F, 0xBF, 0xBF, 0x3E, 0xF0, 0xF8,
  0xFC, 0x7E, 0x3F, 0xBF, 0x9F, 0xCF, 0xEF, 0xE7, 0xF7, 0xF3, 0xFB, 0xF9, 0xF9, 0xFD, 0xFC, 0xFC,
  0xFE, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0x3F, 0x07, 0xE1, 0xF8, 0xFE, 0x9F, 0x8F, 0x87, 0x03,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x01, 0x03,
  0x07, 0xFF, 0xFE, 0xFC, 0x01, 0xF3, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x03, 0xDF, 0xDF, 0xEF, 0xEF,
  0xEF, 0xE7, 0xE7, 0xE7, 0xC0, 0xDC, 0xBF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xC7, 0xF7,
  0xE7, 0x0F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFC, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF,
  0xFF, 0x00, 0xE0, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x03, 0x1F, 0xF0, 0xE0, 0xC7, 0x8F,
  0x9F, 0x1F, 0x3F, 0x3F, 0x7F, 0x7F, 0x7B, 0x79, 0x71, 0xF1, 0xF1, 0xF1, 0xF3, 0xF3, 0xF7, 0xF7,
  0xE7, 0xE7, 0xE7, 0xE0, 0xE7, 0xEF, 0xCF, 0xDF, 0x9F, 0x9F, 0x3F, 0x7F, 0x7F, 0xFF, 0xFE, 0xFC,
  0xF8, 0xF0, 0xE0, 0xE0, 0x80, 0xE0, 0xF8, 0xFF, 0xFF, 0x07, 0x06, 0x06, 0x07, 0x73, 0xF9, 0xF8,
  0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xF3, 0x07, 0x0F, 0x1F, 0x3F, 0x3F, 0x3F, 0x1F, 0x0F, 0x07,
  0x01, 0x3C, 0xFE, 0xFF, 0xFF, 0x7F, 0x7F, 0x00, 0x1F, 0xFF, 0xFF, 0x7F, 0x3F, 0x9F, 0xDF, 0xDF,
  0xDF, 0x1F, 0x3F, 0xFF, 0x7C, 0x03, 0xFF, 0xFF, 0xFF, 0x00, 0x0F, 0x07, 0x83, 0xE0, 0xF8, 0xFF,
  0xFF, 0x3F, 0x1F, 0x7F, 0x7F, 0x7F, 0xFF, 0xFF, 0xFC, 0xFC, 0xFD, 0xFC, 0xFC, 0xFC, 0xFE, 0xFE,
  0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x7F, 0x38, 0x01, 0x01, 0x9D, 0xFC, 0xFC, 0xFE, 0xFE, 0xFE,
  0xFE, 0xFF, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x3F, 0x1F, 0x1F, 0x0F, 0x0F, 0x0F, 0x0F, 0x07,
  0x07, 0x07, 0x07, 0x03, 0x03, 0x81, 0xC0, 0xE0, 0xF8, 0x7C, 0x3F, 0x0F, 0x07, 0x03, 0x01, 0x00,
  0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x3E, 0x7C, 0x78, 0xF0, 0xF0, 0xE0, 0xE1, 0xC3, 0xC3, 0x83, 0x87,
  0x07, 0x07, 0x01, 0x80, 0xC0, 0xE0, 0xF0, 0xF0, 0xF8, 0x38, 0x1C, 0x0C, 0x78, 0xF8, 0xF0, 0xE1,
  0xE0, 0xC0, 0x80, 0x00, 0x00, 0x07, 0x1F, 0x1F, 0x3C, 0x3C, 0x1D, 0x1D, 0x0C, 0x04, 0x02, 0x01,
  0x00, 0x3E, 0x3F, 0x3F, 0x3F, 0x1E, 0x1F, 0x1F, 0x0F, 0x07, 0x83, 0x81, 0xC0, 0xC0, 0xC0, 0xC0,
  0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x80,
  0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC1, 0x83, 0x07, 0x0F, 0x07, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x80, 0xC0, 0xE0, 0xE0, 0xF0, 0xF0, 0x78, 0x78, 0x38, 0x1C, 0x1C, 0x1E, 0x0E, 0x0F,
  0x07, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x07, 0x07, 0x0F, 0x0F, 0x1F, 0x1F,
  0x1F, 0x1F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x0F, 0x1F, 0x1F, 0x1F, 0x1F,
  0x1F, 0x1A, 0x06, 0x0E, 0x3E, 0xFE, 0xFE, 0xFC, 0xF8, 0xF8, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xF0,
  0xFC, 0xFE, 0x7A, 0x32, 0x06, 0x07, 0x0F, 0x1F, 0x1F, 0x3F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F,
  0x7F, 0xFF, 0xFE, 0xFE, 0xFE, 0xFE, 0x7E, 0x7F, 0x7F, 0x7F, 0x3F, 0x3F, 0x1F, 0x1F, 0x03, 0x03,
  0x03, 0x03, 0x07, 0x07, 0x0E, 0x1C, 0x78, 0x70, 0xE0, 0xC0, 0xE0, 0xF8, 0xFE, 0xFF, 0x3F, 0x0F,
  0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x01, 0x07, 0x07, 0x07, 0x07, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
};

 const unsigned char title[] = {
  124, 22, 
  0xF8, 0xF8, 0xF8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x18, 0x38, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0x38, 0x18, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0x38, 0xF0, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x18, 0x18, 0x18, 0x78,
  0x78, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0x18, 0x18, 0x18,
  0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
  0x40, 0xE0, 0x70, 0x78, 0x18, 0x9C, 0x7C, 0x1E, 0x3E, 0x7E, 0x5E, 0x3F, 0xAF, 0xDF, 0xC7, 0xD7,
  0x77, 0xAF, 0xEE, 0x7E, 0x3E, 0x3E, 0x7C, 0x3C, 0x78, 0xF8, 0x70, 0xE0, 0x7F, 0x7F, 0x7F, 0x60,
  0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x0F, 0x3C, 0x70, 0x3C, 0x0F, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x60, 0x70, 0x3C, 0x0F, 0x83, 0x80, 0x80, 0x80, 0x83, 0x0F, 0x3E, 0x70, 0x60, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x60, 0x60, 0x60, 0x78, 0x78, 0x1F, 0x07, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x7F, 0x60, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xF0, 0xF8, 0x3E, 0xFF, 0x36, 0x83, 0xC1, 0x2A, 0x15,
  0x08, 0x00, 0x00, 0x04, 0x22, 0x12, 0x04, 0x01, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x60, 0xC0, 0x00, 0x00, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x07, 0x1F, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x38, 0x3F, 0x1F, 0x1F, 0x1E, 0x05, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00,
};

 const unsigned char titleMenuOptions[] = {
  120, 6,
  0x3F, 0x01, 0x09, 0x09, 0x0F, 0x00, 0x3F, 0x20, 0x20, 0x20, 0x00, 0x20, 0x38, 0x2E, 0x23, 0x2E,
  0x18, 0x23, 0x06, 0x3C, 0x06, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x1F, 0x31,
  0x21, 0x31, 0x13, 0x00, 0x3F, 0x01, 0x09, 0x1D, 0x37, 0x00, 0x3F, 0x21, 0x2D, 0x2D, 0x00, 0x3F,
  0x21, 0x21, 0x33, 0x1E, 0x00, 0x3F, 0x00, 0x01, 0x01, 0x3F, 0x01, 0x01, 0x00, 0x27, 0x25, 0x21,
  0x25, 0x3D, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x25, 0x21, 0x25, 0x3D, 0x18,
  0x00, 0x3F, 0x21, 0x2D, 0x2D, 0x00, 0x01, 0x01, 0x3F, 0x01, 0x01, 0x00, 0x01, 0x01, 0x3F, 0x01,
  0x01, 0x00, 0x3F, 0x00, 0x3F, 0x03, 0x06, 0x1C, 0x30, 0x3F, 0x00, 0x1E, 0x33, 0x21, 0x29, 0x29,
  0x1A, 0x00, 0x27, 0x25, 0x21, 0x25, 0x3D, 0x19,
};

 const unsigned char enemy1[] = {
  16, 16,
  0x80, 0x40, 0x22, 0x92, 0x50, 0x72, 0xA6, 0x90, 0x96, 0xDC, 0x78, 0x30, 0x80, 0x30, 0x00, 0x30,
  0x01, 0x02, 0x44, 0x49, 0x0A, 0x4E, 0x65, 0x09, 0x69, 0x3B, 0x1E, 0x0C, 0x01, 0x0C, 0x00, 0x0C,
};

 const unsigned char enemy2[] = {
  16, 16,
  0x48, 0x9C, 0xB6, 0xA2, 0x32, 0xCA, 0xA6, 0x62, 0x02, 0x28, 0x02, 0x48, 0x86, 0x00, 0x02, 0x00,
  0x12, 0x39, 0x6D, 0x45, 0x4C, 0x53, 0x65, 0x46, 0x40, 0x14, 0x40, 0x12, 0x61, 0x00, 0x40, 0x00,
};

 const unsigned char enemy3[] = {
  16, 16,
  0x00, 0x84, 0x80, 0x84, 0x80, 0x84, 0xC4, 0x66, 0x6E, 0x26, 0xBC, 0xDC, 0xE0, 0xBC, 0x9C, 0x0C,
  0x00, 0x21, 0x01, 0x21, 0x01, 0x21, 0x23, 0x66, 0x76, 0x64, 0x3D, 0x3B, 0x07, 0x3D, 0x39, 0x30,
};

 const unsigned char livesShip [] = {
  8, 7,
  0x49, 0x22, 0x77, 0x49, 0x55, 0x14, 0x49, 0x08,
};

 const unsigned char gameOver[] = {
  33, 40,    
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x04, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x70, 0xF8, 0x70, 0x20, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x80, 
  0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x80, 0x04, 0x00, 0x20, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 
  0x40, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x02, 0x00, 0x80, 
  0x08, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xFF, 0x26, 0x03, 0xFE, 0x92, 0xFE, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xE0, 0x60, 0x20, 0xE0, 0x00, 0x02, 
  0x00, 0x24, 0x00, 0x85, 0x2A, 0x50, 0x80, 0x04, 0x20, 0x00, 
  0x00, 0x00, 0xFF, 0x51, 0x01, 0xFF, 0x09, 0x00, 0xFF, 0x20, 
  0xFF, 0x00, 0x00, 0x00, 0xFC, 0x4C, 0x04, 0xFF, 0x25, 0x00, 
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x8A, 
  0xD5, 0x60, 0xC4, 0x40, 0x80
};

 const unsigned char boss1[] = {
  32, 16,
  0x00, 0x00, 0x40, 0x40, 0x60, 0x60, 0x60, 0x70, 0x70, 0x70, 0x30, 0x38, 0xB8, 0x18, 0x98, 0x18,
  0x9A, 0x1A, 0x9A, 0x9B, 0xAB, 0xDB, 0xAB, 0xDB, 0xAB, 0xDF, 0xAA, 0xD6, 0xAC, 0x5C, 0xA8, 0x10,
  0x00, 0x00, 0x02, 0x02, 0x06, 0x06, 0x06, 0x0E, 0x0E, 0x0E, 0x0C, 0x1C, 0x1D, 0x18, 0x19, 0x18,
  0x59, 0x58, 0x59, 0xD9, 0xD5, 0xDB, 0xD5, 0xDB, 0xD5, 0xFB, 0x55, 0x6B, 0x35, 0x3A, 0x15, 0x08,
};

 const unsigned char boss2[] = {
  32, 16,
  0x00, 0x00, 0x60, 0x50, 0x50, 0x90, 0xA0, 0xF0, 0x98, 0xCC, 0xFC, 0xFC, 0xF8, 0xF4, 0xE0, 0x00,
  0xC0, 0x20, 0x50, 0x10, 0x20, 0xC0, 0x40, 0x60, 0x90, 0x28, 0x08, 0x90, 0x60, 0x80, 0x00, 0x80,
  0x00, 0x00, 0x0C, 0x14, 0x14, 0x13, 0x0B, 0x1F, 0x33, 0x67, 0x7F, 0x7F, 0x3F, 0x5F, 0x0F, 0x01,
  0x00, 0x01, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x03, 0x04,
  0x00, 0x00, 0x60, 0x50, 0x50, 0x90, 0xA0, 0xF0, 0x98, 0xCC, 0xFC, 0xFC, 0xF8, 0xF4, 0xE0, 0x00,
  0x80, 0x40, 0xA0, 0x20, 0x40, 0x80, 0x40, 0x30, 0x48, 0x94, 0x84, 0x48, 0x30, 0x40, 0x80, 0x40,
  0x00, 0x00, 0x0C, 0x14, 0x14, 0x13, 0x0B, 0x1F, 0x33, 0x67, 0x7F, 0x7F, 0x3F, 0x5F, 0x0F, 0x01,
  0x01, 0x02, 0x04, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02,
  0x00, 0x00, 0x60, 0x50, 0x50, 0x90, 0xA0, 0xF0, 0x98, 0xCC, 0xFC, 0xFC, 0xF8, 0xF4, 0xE0, 0x00,
  0x00, 0x80, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x80, 0x00, 0x00, 0xC0, 0x20,
  0x00, 0x00, 0x0C, 0x14, 0x14, 0x13, 0x0B, 0x1F, 0x33, 0x67, 0x7F, 0x7F, 0x3F, 0x5F, 0x0F, 0x01,
  0x03, 0x04, 0x09, 0x08, 0x04, 0x03, 0x01, 0x03, 0x04, 0x09, 0x08, 0x04, 0x03, 0x01, 0x00, 0x01,
  0x00, 0x00, 0x60, 0x50, 0x50, 0x90, 0xA0, 0xF0, 0x98, 0xCC, 0xFC, 0xFC, 0xF8, 0xF4, 0xE0, 0x80,
  0x80, 0x40, 0xA0, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x80, 0x40,
  0x00, 0x00, 0x0C, 0x14, 0x14, 0x13, 0x0B, 0x1F, 0x33, 0x67, 0x7F, 0x7F, 0x3F, 0x5F, 0x0F, 0x00,
  0x01, 0x02, 0x04, 0x04, 0x02, 0x01, 0x01, 0x06, 0x09, 0x12, 0x10, 0x09, 0x06, 0x01, 0x01, 0x02,
};

 const unsigned char boss3[] = {
  59, 53,
  0x00, 0xC0, 0x40, 0x98, 0x48, 0x98, 0x58, 0x88, 0x58, 0x9F, 0x41, 0x9D, 0x5D, 0x9D, 0x5D, 0x9D,
  0x5D, 0x9B, 0x5A, 0x9A, 0x5A, 0x9A, 0x5A, 0x9A, 0x1A, 0xF6, 0xEC, 0xD8, 0xB8, 0xA0, 0xA0, 0xA0,
  0xA0, 0xBC, 0x1E, 0xEE, 0xB6, 0xF6, 0xB6, 0xF6, 0xB6, 0xF6, 0xAE, 0xEE, 0xAC, 0xEC, 0xAC, 0xEC,
  0xEC, 0x5C, 0xBC, 0xF0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xD5, 0xCA, 0x95,
  0xCA, 0xD5, 0x8A, 0xD5, 0xCA, 0xD5, 0x4A, 0x15, 0x0A, 0x15, 0x0A, 0x15, 0x0A, 0x15, 0x0A, 0x15,
  0x0A, 0x15, 0x0A, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xBF, 0xBF, 0xBF, 0xBE, 0xBE,
  0xBE, 0xBE, 0xBE, 0xFE, 0xFE, 0xFE, 0x7E, 0x9E, 0xEE, 0xF6, 0xFA, 0xFA, 0xFB, 0xFB, 0xF9, 0xF8,
  0xF0, 0xF0, 0xE0, 0xE0, 0xC0, 0x80, 0x40, 0xC0, 0xE3, 0x63, 0x6F, 0x6F, 0x6F, 0x67, 0x63, 0x61,
  0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0xE0, 0xE0, 0xE8, 0xEC, 0xEE, 0xDF, 0xDF, 0xBF,
  0xBF, 0x7F, 0x7F, 0x7F, 0x7F, 0x54, 0x6A, 0x54, 0x6A, 0x54, 0x6A, 0x14, 0xCA, 0x04, 0xEA, 0x05,
  0xF8, 0xFE, 0x0F, 0xF7, 0xFB, 0xFD, 0xFD, 0xFE, 0x7E, 0x3E, 0x3D, 0x3D, 0x7B, 0xF7, 0xEF, 0x1F,
  0xFF, 0x20, 0x3F, 0x7F, 0x69, 0x6F, 0x6F, 0x6F, 0x6F, 0x6F, 0x6F, 0x6F, 0x6F, 0x6F, 0x6F, 0x6F,
  0x6F, 0x6F, 0x6F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0xBF, 0x3F, 0x9F, 0x5F, 0xAF, 0x4F, 0xAF, 0x4F,
  0xAF, 0x4F, 0xAF, 0x6F, 0xE0, 0xEF, 0xC0, 0xBF, 0x00, 0x7F, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0xFF,
  0xF1, 0xE0, 0xE4, 0xC0, 0x80, 0x9B, 0x9B, 0xC0, 0xE0, 0xFF, 0x00, 0xFF, 0x00, 0x00, 0xF8, 0xF8,
  0xFF, 0xFF, 0xFF, 0xFE, 0x7C, 0xB8, 0xD0, 0x60, 0x60, 0x60, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0,
  0x81, 0x83, 0x87, 0x0E, 0x1D, 0xFA, 0xF5, 0xEA, 0xD5, 0xAA, 0x55, 0xAA, 0x55, 0xAA, 0x55, 0xAA,
  0x55, 0xAB, 0x57, 0xAF, 0x5F, 0xBE, 0x79, 0xE7, 0x9E, 0x7D, 0xFB, 0xF7, 0xF7, 0xEF, 0xEF, 0xEF,
  0xF7, 0xF7, 0xFB, 0xFD, 0xFE, 0x7F, 0x3F, 0x00, 0xFF, 0xBF, 0x5F, 0xC1, 0xD5, 0x41, 0xFE, 0x7F,
  0xE1, 0x5E, 0xB3, 0x21, 0xA1, 0xB3, 0x5F, 0x53, 0x41, 0x41, 0x53, 0x5F, 0x53, 0x41, 0xC1, 0xD3,
  0x5C, 0xD3, 0x4F, 0xBF, 0xBF, 0x7F, 0xFE, 0xFD, 0xFA, 0x15, 0xEA, 0xA5, 0xEA, 0xA5, 0xEA, 0xA5,
  0xEA, 0xA5, 0xEA, 0xA5, 0xEB, 0xA6, 0xED, 0xE9, 0x59, 0xB9, 0xF1, 0xE1, 0x01, 0x01, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x1F, 0x1D, 0x1F, 0x1C, 0x1F,
  0x1F, 0x1E, 0x1E, 0x1E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0F, 0x0F, 0x0C, 0x07, 0x03, 0x03, 0x00,
  0x00, 0x00, 0x00, 0x07, 0x0F, 0x0E, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0E, 0x0E, 0x06, 0x06,
  0x06, 0x06, 0x06, 0x07, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

 const unsigned char title_letter_a[] = {
  13, 18,
  0x00, 0x00, 0x80, 0xE0, 0x78, 0x1E, 0x07, 0x1E, 0x78, 0xE0, 
  0xC0, 0x00, 0x00, 0x0C, 0x0E, 0x07, 0x01, 0x30, 0xF0, 0xF0, 
  0xF0, 0x30, 0x01, 0x07, 0x0E, 0x0C, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

 const unsigned char title_letter_d[] = {
  10, 12,
  0xFF, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x0F, 0x0F, 0xFC, 0xF0, 
  0x0F, 0x0F, 0x0F, 0x0C, 0x0C, 0x0C, 0x0F, 0x0F, 0x03, 0x00
};

 const unsigned char title_letter_e[] = {
  10, 12,
  0xFF, 0xFF, 0xFF, 0x03, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 
  0x0F, 0x0F, 0x0F, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C
};

 const unsigned char title_letter_v[] = {
  13, 12,
  0x03, 0x07, 0x1E, 0x78, 0xE0, 0x80, 0x00, 0x80, 0xE0, 0x78, 
  0x3E, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x0E, 
  0x07, 0x01, 0x00, 0x00, 0x00, 0x00
};

 const unsigned char title_planet[] = {
  35, 22,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0xE0, 0x70, 
  0x78, 0x18, 0x9C, 0x7C, 0x1E, 0x3E, 0x7E, 0x5E, 0x3F, 0xAF, 
  0xDF, 0xC7, 0xD7, 0x77, 0xAF, 0xEE, 0x7E, 0x3E, 0x3E, 0x7C, 
  0x3C, 0x78, 0xF8, 0x70, 0xE0, 0x00, 0x80, 0xF0, 0xF8, 0x3E, 
  0xFF, 0x36, 0x83, 0xC1, 0x2A, 0x15, 0x08, 0x00, 0x00, 0x04, 
  0x22, 0x12, 0x04, 0x01, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x60, 0xC0, 0x00, 0x00, 0x03, 0x06, 0x00, 
  0x38, 0x3F, 0x1F, 0x1F, 0x1E, 0x05, 0x01, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00  
};

#endif

/*
 * This sketch is customized for the Wowki AVR Simulator
 * To customize this sketch for a different platform:
 * - Adjust options below
 * - Edit my_config.h, changing LEDPIN
 * - Edit FL_Wrapper_UserFX1.cpp.h, changing segmentmap to match your 2D mapping (only needed for 2D effects)
 * - TODO: update NpbWrapperFastLED.h to support more than just Neopixel output
 */

#include "FX.h"

WS2812FX strip;

bool skipFirstLed = false;
bool useRGBW = false;         // useRGBW = true hasn't been tested
uint8_t brightness = 255;     // brightness is range from 0-255 
//uint8_t brightness = 20;    // Atom Matrix needs low brightness

void setup() {
  Serial.begin(115200);
  Serial.println("WLED Effects Testing");
  Serial.println("--------------------");

  strip.init(useRGBW, MAX_LEDS, skipFirstLed);
  strip.setBrightness(brightness);

  // set mode manually here, sketch currently only runs one mode at a time
  strip.setMode(0, BUILTIN_MODE_COUNT + USERFX1_MODE_COUNT + USERFX2_MODE_2DSWIRL);
  //strip.setMode(0, BUILTIN_MODE_COUNT + USERFX1_MODE_COUNT + USERFX2_MODE_SCROLLING_WASH);
  //strip.setMode(0, BUILTIN_MODE_COUNT + USERFX1_MODE_COUNT + USERFX2_MODE_2D_FIRE2012);
  //strip.setMode(0, BUILTIN_MODE_COUNT + USERFX1_MODE_COUNT + USERFX2_MODE_BLINK_TRIGGERS);
  //strip.setMode(0, BUILTIN_MODE_COUNT + USERFX1_MODE_COUNT + USERFX2_MODE_FL_TWINKLES);
}

void loop() {
  strip.service();
}

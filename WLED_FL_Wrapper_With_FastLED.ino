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
  strip.init(useRGBW, MAX_LEDS, skipFirstLed);
  strip.setMode(0, BUILTIN_MODE_COUNT + USERFX1_MODE_COUNT + USERFX2_MODE_2D_FIRE2012);
  strip.setBrightness(brightness);
}

void loop() {
  strip.service();
}

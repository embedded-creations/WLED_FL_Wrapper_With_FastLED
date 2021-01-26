/*
 * This sketch is customized for the Wokwi.com AVR Simulator
 * To customize this sketch for a different platform:
 * - Adjust options below
 * - Edit my_config.h, changing LEDPIN
 * - Edit FL_Wrapper_UserFX1.cpp.h, changing segmentmap to match your 2D mapping (only needed for 2D effects)
 * - TODO: update NpbWrapperFastLED.h to support more than just Neopixel output
 *
 * Careful when editing this project in Wokwi, I've lost data several times.  I edit the project using a text editor,
 *   and copy and paste edited files into the Wokwi project to compile.
 * Specifically, I've lost data when trying to rename the .ino file.  It will save, but when you try to open the project
 *   again, the .ino file will have the previous name, and any "saved" changes were lost
 * Workaround to rename the .ino: Rename the .ino, "Save a copy", close the project and reopen and make sure it has
 *   the new name before continuing to edit the project
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

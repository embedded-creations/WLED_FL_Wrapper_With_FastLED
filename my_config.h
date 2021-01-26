#pragma once

// The simulator works with FastLED, so use this custom wrapper which swaps out NeoPixelBus for FastLED
#define CUSTOM_NPBWRAPPER_H "NpbWrapperFastLED.h"

#define FX_REMOVE_BUILTIN_PATTERNS

// There doesn't seem to be enough memory (or it takes too long to send out 1500 neopixels) with the simulator
#define MAX_LEDS (512 + 1)

//#define LEDPIN 27   // This pin is used by the Atom Lite Matrix
#define LEDPIN 3      // This pin is used by the simulator - is it the best pin?

// Include FL_Wrapper for FastLED compatible effects
#define USERFX1_H       "FL_Wrapper_UserFX1.h"
#define USERFX1_CPP_H   "FL_Wrapper_UserFX1.cpp.h"

// Include User-defined effects in UserFX2 - edit this file or replace it to add new effects
#define USERFX2_H       "FL_Effects_UserFX2.h"
#define USERFX2_CPP_H   "FL_Effects_UserFX2.cpp.h"

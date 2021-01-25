#include "FX.h"

WS2812FX strip;

bool useRGBW = false;
uint16_t ledCount = 5*5;
bool skipFirstLed = false;

void setup() {
  delay(1000);
  Serial.begin(115200);
  
  // put your setup code here, to run once:

  strip.init(useRGBW, ledCount, skipFirstLed);

  strip.setMode(0, BUILTIN_MODE_COUNT + USERFX1_MODE_COUNT + USERFX2_MODE_2D_FIRE2012);

}

void loop() {
  // put your main code here, to run repeatedly:  

  strip.service();
}

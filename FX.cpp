#include "FX.h"

/*
 * No blinking. Just plain old static light.
 */
uint16_t WS2812FX::mode_static(void) {
  fill(SEGCOLOR(0));
  return (SEGMENT.getOption(SEG_OPTION_TRANSITIONAL)) ? FRAMETIME : 500; //update faster if in transition
}

#ifdef USERFX1_CPP_H
#include USERFX1_CPP_H
#endif

#ifdef USERFX2_CPP_H
#include USERFX2_CPP_H
#endif

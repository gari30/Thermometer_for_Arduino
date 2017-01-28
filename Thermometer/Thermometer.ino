#include "seg_display.h"

void setup() {
  DDRB = 0x03;
  DDRD = 0x00;
  PORTB = 0x00;
}

void loop() {
  Thermometer::seg_disp seg_;
  seg_.ThermoMain();
}
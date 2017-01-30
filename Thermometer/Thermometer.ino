#include <MsTimer2.h>
#include "seg_display.h"

void setup() {
  DDRB = 0x03;
  DDRD = 0xff;
  PORTB = 0x01;
  PORTD = 0x00;

  MsTimer2::set(10, TimerInterrupt);
  MsTimer2::start();
}

void loop() {
  Thermometer::seg_disp seg_;
  seg_.ThermoMain();
}

void TimerInterrupt() {
  PORTB ^= 0x03;
}
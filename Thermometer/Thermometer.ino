#include "seg_display.h"

void setup() {
  DDRB = 0x03;
  pinMode(PD0, OUTPUT);
  pinMode(PD1, OUTPUT);
  pinMode(PD2, OUTPUT);
  pinMode(PD3, OUTPUT);
  pinMode(PD4, OUTPUT);
  pinMode(PD5, OUTPUT);
  pinMode(PD6, OUTPUT);
  pinMode(PD7, OUTPUT);
  PORTB = 0x00;
}

void loop() {
  Thermometer::seg_disp seg_;
  seg_.ThermoMain();
}
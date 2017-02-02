#include "seg_display.h"

namespace Thermometer {

namespace {

void seg_clear(void) {
  PORTD = 0xff;
}

}  // namespace

int count = 0;

void seg_disp::ThermoMain() {
  auto a = 1000;
  while (true) {
    count += 1;
    delay(a);
  }
}

}  // namespace Thermometer
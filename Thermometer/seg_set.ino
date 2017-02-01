#include "seg_display.h"

namespace Thermometer {

namespace {

void seg_clear(void) {
  PORTD = 0xff;
}

constexpr unsigned char display_type[] = {
  0xc0, //0
  0xf9, //1
  0xa4, //2
  0xb0, //3
  0x99, //4
  0x92, //5
  0x82, //6
  0xf8, //7
  0x80, //8
  0x90, //9
};

}  // namespace

void seg_disp::ThermoMain() {
  auto a = 1000;
  int count = 0;
  while (true) {
    count += 1;
/*    if (PORTB == 0x01) {
      PORTD = display_type[count % 10];
    }else {
      PORTD = display_type[count / 10];
    }*/
    PORTD = display_type[count % 10];
    delay(a);
  }
}

}  // namespace Thermometer
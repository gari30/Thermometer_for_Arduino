#include "seg_display.h"

namespace Thermometer {
//namespace Segment {
namespace {
void seg_disp0(void)
{
  digitalWrite(seg7_a,LOW);
  digitalWrite(seg7_b,LOW);
  digitalWrite(seg7_c,LOW);
  digitalWrite(seg7_d,LOW);
  digitalWrite(seg7_e,LOW);
  digitalWrite(seg7_f,LOW);
  digitalWrite(seg7_g,HIGH);
  digitalWrite(seg7_dp,HIGH);
}

void seg_disp1(void)
{
  digitalWrite(seg7_a,HIGH);
  digitalWrite(seg7_b,LOW);
  digitalWrite(seg7_c,LOW);
  digitalWrite(seg7_d,HIGH);
  digitalWrite(seg7_e,HIGH);
  digitalWrite(seg7_f,HIGH);
  digitalWrite(seg7_g,HIGH);
  digitalWrite(seg7_dp,HIGH);
}

void seg_disp2(void)
{
  digitalWrite(seg7_a,LOW);
  digitalWrite(seg7_b,LOW);
  digitalWrite(seg7_c,HIGH);
  digitalWrite(seg7_d,LOW);
  digitalWrite(seg7_e,LOW);
  digitalWrite(seg7_f,HIGH);
  digitalWrite(seg7_g,LOW);
  digitalWrite(seg7_dp,HIGH);
}

void seg_disp3(void)
{
  digitalWrite(seg7_a,LOW);
  digitalWrite(seg7_b,LOW);
  digitalWrite(seg7_c,LOW);
  digitalWrite(seg7_d,LOW);
  digitalWrite(seg7_e,HIGH);
  digitalWrite(seg7_f,HIGH);
  digitalWrite(seg7_g,LOW);
  digitalWrite(seg7_dp,HIGH);
}

void seg_disp4(void)
{
  digitalWrite(seg7_a,HIGH);
  digitalWrite(seg7_b,LOW);
  digitalWrite(seg7_c,LOW);
  digitalWrite(seg7_d,HIGH);
  digitalWrite(seg7_e,HIGH);
  digitalWrite(seg7_f,LOW);
  digitalWrite(seg7_g,LOW);
  digitalWrite(seg7_dp,HIGH);
}

void seg_disp5(void)
{
  digitalWrite(seg7_a,LOW);
  digitalWrite(seg7_b,HIGH);
  digitalWrite(seg7_c,LOW);
  digitalWrite(seg7_d,LOW);
  digitalWrite(seg7_e,HIGH);
  digitalWrite(seg7_f,LOW);
  digitalWrite(seg7_g,LOW);
  digitalWrite(seg7_dp,HIGH);
}

void seg_disp6(void)
{
  digitalWrite(seg7_a,LOW);
  digitalWrite(seg7_b,HIGH);
  digitalWrite(seg7_c,LOW);
  digitalWrite(seg7_d,LOW);
  digitalWrite(seg7_e,LOW);
  digitalWrite(seg7_f,LOW);
  digitalWrite(seg7_g,LOW);
  digitalWrite(seg7_dp,HIGH);
}


void seg_disp7(void)
{
  digitalWrite(seg7_a,LOW);
  digitalWrite(seg7_b,LOW);
  digitalWrite(seg7_c,LOW);
  digitalWrite(seg7_d,HIGH);
  digitalWrite(seg7_e,HIGH);
  digitalWrite(seg7_f,HIGH);
  digitalWrite(seg7_g,HIGH);
  digitalWrite(seg7_dp,HIGH);
}

void seg_disp8(void)
{
  digitalWrite(seg7_a,LOW);
  digitalWrite(seg7_b,LOW);
  digitalWrite(seg7_c,LOW);
  digitalWrite(seg7_d,LOW);
  digitalWrite(seg7_e,LOW);
  digitalWrite(seg7_f,LOW);
  digitalWrite(seg7_g,LOW);
  digitalWrite(seg7_dp,HIGH);
}

void seg_disp9(void)
{
  digitalWrite(seg7_a,LOW);
  digitalWrite(seg7_b,LOW);
  digitalWrite(seg7_c,LOW);
  digitalWrite(seg7_d,LOW);
  digitalWrite(seg7_e,HIGH);
  digitalWrite(seg7_f,LOW);
  digitalWrite(seg7_g,LOW);
  digitalWrite(seg7_dp,HIGH);
}

void seg_clear(void)
{
  digitalWrite(seg7_a,HIGH);
  digitalWrite(seg7_b,HIGH);
  digitalWrite(seg7_c,HIGH);
  digitalWrite(seg7_d,HIGH);
  digitalWrite(seg7_e,HIGH);
  digitalWrite(seg7_f,HIGH);
  digitalWrite(seg7_g,HIGH);
  digitalWrite(seg7_dp,HIGH);
}

}  // namespace

void seg_disp::ThermoMain() {
  auto a = 1000;
  PORTB = 0x01;
  while (1) {
    digitalWrite(PORTB0,LOW);
    seg_disp0();
    delay(a);
    seg_disp1();
    delay(a);
    seg_disp2();
    delay(a);
    seg_disp3();
    delay(a);
    seg_disp4();
    delay(a);
    seg_disp5();
    delay(a);
    seg_disp6();
    delay(a);
    seg_disp7();
    delay(a);
    seg_disp8();
    delay(a);
    seg_disp9();
    delay(a);
    seg_clear();
  }
}

//}  // namespace Thermometer
}  // namespace seg
#ifndef SEG_DISPLAY_H
#define SEG_DISPLAY_H 

#define seg10   PORTB0
#define seg1    PORTB1
#define seg7_a  PORTD0
#define seg7_b  PORTD1
#define seg7_c  PORTD2
#define seg7_d  PORTD3
#define seg7_e  PORTD4
#define seg7_f  PORTD5
#define seg7_g  PORTD6
#define seg7_dp PORTD7

namespace Thermometer {

class seg_disp {
 public :
  void ThermoMain();
};

extern int count;

constexpr static unsigned char display_type[] = {
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

}  // namespace Thermometer

#endif  // SEG_DISPLAY_H
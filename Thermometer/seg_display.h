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

}  // namespace Thermometer

#endif  // SEG_DISPLAY_H
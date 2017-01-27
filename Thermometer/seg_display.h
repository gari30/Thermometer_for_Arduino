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
//namespace Segment {

class seg_disp {
 public :
  void ThermoMain();

/*
 private :
  void seg_disp0(void);
  void seg_disp1(void);
  void seg_disp2(void);
  void seg_disp3(void);
  void seg_disp4(void);
  void seg_disp5(void);
  void seg_disp6(void);
  void seg_disp7(void);
  void seg_disp8(void);
  void seg_disp9(void);
  void seg_clear(void);
*/
};

//}  // namespace Thermometer
}  // namespace Segment

#endif  // SEG_DISPLAY_H
#define PB0 seg10
#define PB1 seg1
#define PD0 7seg_a
#define PD1 7seg_b
#define PD2 7seg_c
#define PD3 7seg_d
#define PD4 7seg_e
#define PD5 7seg_f
#define PD6 7seg_g
#define PD7 7seg_dp

setup()
{
  pinMode(seg10, OUTPUT);
  pinMode(seg1, OUTPUT);
  pinMode(7seg_a, OUTPUT);
  pinMode(7seg_b, OUTPUT);
  pinMode(7seg_c, OUTPUT);
  pinMode(7seg_d, OUTPUT);
  pinMode(7seg_e, OUTPUT);
  pinMode(7seg_f, OUTPUT);
  pinMode(7seg_g, OUTPUT);
  pinMode(7seg_dp, OUTPUT);

  char 7seg_led[10] = {0x};
}
loop()
{

}


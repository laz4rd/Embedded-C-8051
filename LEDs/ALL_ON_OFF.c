#include <reg51.h>

void delay() {
  int i;
  TMOD = 0x10;
  for (i = 0; i < 20; i++) {
    TL1 = 0xAE;
    TH1 = 0x3C;
    TR1 = 1 while (TF1 == 0) {}
    TR1 = 0;
    TF1 = 0;
  }
}

void main() {
  while (1) {
    P1 = 0xFF; // 11111111
    delay();
    P1 = 0x00;
    delay();
  }
}

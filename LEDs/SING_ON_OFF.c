#include <reg51.h> // Including 8051 Special Function Registers Header File

void delay() {
  int i;
  TMOD = 0x10;
  for (i = 0; i < 20; i++) {
    TL1 = 0xAE;
    TH1 = 0x3C;

    TR1 = 1;
    while (TF1 == 0) {
    }
    TR = 0;
    TF = 0;
  }
}

void main() {
  while (1) {  // while (1) for infinite loop
    P1 = 0x01; // 00000001
    delay();   // calling Delay
    P1 = 0x00; // 00000000
    delay();   // calling Delay
  }
}

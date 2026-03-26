#include <reg51.h>

// Delay using Timer1
void delay() {
  int i;

  TMOD = 0x10; // Timer1 Mode 1 (16-bit)

  for (i = 0; i < 20; i++) {
    TH1 = 0x3C; // Load timer value
    TL1 = 0xAE;

    TR1 = 1; // Start timer

    while (TF1 == 0)
      ; // Wait for overflow

    TR1 = 0; // Stop timer
    TF1 = 0; // Clear flag
  }
}

void main() {
  P3 = 0x01; // Enable display (if used)

  while (1) {
    P1 = 0x3F;
    delay(); // 0
    P1 = 0x06;
    delay(); // 1
    P1 = 0x5B;
    delay(); // 2
    P1 = 0x4F;
    delay(); // 3
    P1 = 0x66;
    delay(); // 4
    P1 = 0x6D;
    delay(); // 5
    P1 = 0x7D;
    delay(); // 6
    P1 = 0x07;
    delay(); // 7
    P1 = 0x7F;
    delay(); // 8
    P1 = 0x6F;
    delay(); // 9
  }
}

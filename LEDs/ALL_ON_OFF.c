#include <reg51.h>

void delay() {
  unsigned int i,j;
  for (i = 0;i < 1000;i++) {
    for (j = 0;j<1200;j++) {

    }
  }
}

void main() {
  while(1) {
    P1 = 0xFF; //11111111
    delay();
    P1 = 0x00;
    delay();
  }
}

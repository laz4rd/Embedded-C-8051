#include <reg51.h> // Including 8051 Special Function Registers Header File

void delay() {
  unsigned int i,j;
  for (i = 0; i < 1000; i++) {
    for (j = 0; j < 1275; j++) { // Nested loop for easier delay
    
    }
  }
}

void main() {
  while (1) { // while (1) for infinite loop
    P1 = 0x01; // 00000001
    delay();   // calling Delay
    P1 = 0x00; // 00000000
    delay();   // calling Delay
  }
}

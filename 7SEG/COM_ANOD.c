#include <reg51.h>   // 8051 register definitions

// Function to generate delay using Timer1
void delay() {
    int i;

    TMOD = 0x10;          // Timer1 Mode 1 (16-bit mode)

    for(i = 0; i < 20; i++) {   // Equivalent to R0 = 14H (~20 decimal)
        TL1 = 0xAE;        // Load low byte
        TH1 = 0x3C;        // Load high byte
        
        TR1 = 1;           // Start Timer1

        while(TF1 == 0) { // Wait until overflow flag becomes 1
          
        }

        TR1 = 0;           // Stop Timer
        TF1 = 0;           // Clear overflow flag
    }
}

void main() {
    P3 = 0x01;             // Initialize Port 3 (same as MOV P3,#01H)

    while(1) {             // Infinite loop (SJMP COUNT1)

        P1 = 0xC0; delay();   // Display 0
        P1 = 0xF9; delay();   // Display 1
        P1 = 0xA4; delay();   // Display 2
        P1 = 0xB0; delay();   // Display 3
        P1 = 0x99; delay();   // Display 4
        P1 = 0x92; delay();   // Display 5
        P1 = 0x82; delay();   // Display 6
        P1 = 0xF8; delay();   // Display 7
        P1 = 0x80; delay();   // Display 8
        P1 = 0x90; delay();   // Display 9
    }
}

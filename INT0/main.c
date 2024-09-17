/*
    INT0 - Interrupcao externa 0 (Endereco: 0003h)

    Matheus Dantas Cipolotti
*/

#include <mcs51/8051.h>

#include "delay.h"

#define BOARDLED    P1_2
#define LED_INT     P1_3

void external_interrupt_0(void) __interrupt(0){
    LED_INT = 1;                                    // Liga o LED (P1.3)
    delay_ms(500);                                  // Aguarda 500ms
    LED_INT = 0;                                    // Desliga o LED (nível alto)
    delay_ms(500);                                  // Aguarda 500ms
}

void main(void){
    IT0 = 1;                                        // Configura a interrupção INT0 para ser sensível à borda de descida
    EX0 = 1;                                        // Habilita a interrupção externa INT0
    EA = 1;                                         // Habilita todas as interrupções

    LED_INT = 0;                                    // Inicialmente desliga o LED (P1.3)

    while(1){
        BOARDLED = 0;                           // Liga o LED (nível baixo)
        delay_ms(500);                          // Aguarda 500ms
        BOARDLED = 1;                           // Desliga o LED (nível alto)
        delay_ms(500);                          // Aguarda 500ms
    }
}

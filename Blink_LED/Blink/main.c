/*
 */

#include <mcs51/8051.h>

#include "delay.h"

#define BOARDLED P1_2                   // Define o pino P1.0 para o LED

void main(void){
    while (1){
        BOARDLED = 0;                   // Liga o LED (nível baixo)
        delay_ms(500);                  // Aguarda 500ms
        BOARDLED = 1;                   // Desliga o LED (nível alto)
        delay_ms(500);                  // Aguarda 500ms
    }
}


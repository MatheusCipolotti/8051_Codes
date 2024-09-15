#include <8051.h>                       // Biblioteca para o AT89S51

#define BOARDLED P1_2                   // Define o pino P1.0 para o LED

void delay_ms(unsigned int time);

void main(void){
    while (1){
        if(P1_3 == 0){
            BOARDLED = 0;               // Liga o LED (nível baixo)
        }
        else{
            BOARDLED = 1;               // Desliga o LED (nível alto)
        }
        delay_ms(50);                  // Aguarda 50ms
    }
}

void delay_ms(unsigned int time){
    unsigned int i, j;
    for (i = 0; i < time; i++)
        for (j = 0; j < 140; j++);      // Aproximadamente 1ms
}

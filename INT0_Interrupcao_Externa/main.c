/*
    INT0 – Interrupção externa 0 (Endereço: 0003h)

    Matheus Dantas Cipolotti
*/

#include <8051.h>                               // Biblioteca para o AT89S51

#define BOARDLED P1_2                           // Define o pino P1.0 para o LED
#define LED_INT  P1_3                           // LED de indicacao da interrupcao externa   

void delay_ms(unsigned int time);

void external_interrupt_0(void) __interrupt(0){
    LED_INT = 1;                                // Liga o LED (P1.3)
    delay_ms(500);                              // Aguarda 500ms
    LED_INT = 0;                                // Desliga o LED (nível alto)
    delay_ms(500);                              // Aguarda 500ms
}

void main(void){
    IT0 = 1;                                    // Configura a interrupção INT0 para ser sensível à borda de descida
    EX0 = 1;                                    // Habilita a interrupção externa INT0
    EA = 1;                                     // Habilita todas as interrupções

    LED_INT = 0;                                // Inicialmente desliga o LED (P1.3)

    while (1){
        BOARDLED = 0;                           // Liga o LED (nível baixo)
        delay_ms(500);                          // Aguarda 500ms
        BOARDLED = 1;                           // Desliga o LED (nível alto)
        delay_ms(500);                          // Aguarda 500ms
    }
}

void delay_ms(unsigned int time){
    unsigned int i, j;
    for (i = 0; i < time; i++)
        for (j = 0; j < 140; j++);              // Aproximadamente 1ms
}

/*
    Estouro do TIMER 0 com clock interno

    Matheus Dantas Cipolotti
*/

#include <mcs51/8051.h>

#define BOARDLED    P1_2

unsigned int counter = 0x00;
unsigned char control = 0x00;

void TIMER0_isr(void) __interrupt(1){
    counter++;

    TH0 = 0x3C;
    TL0 = 0xB0;
    if(counter == 12){                      //condicao de funcionalidade a cada 600mS
        control = ~control;
        BOARDLED = control;
        counter = 0x00;
    }
}

void main(void){
    EA = 0x01;                              //Habilita a interrupcao global
    TR0 = 0x01;                             //Habilita o TIMER0
    ET0 = 0x01;                             //Habilita o Overflow do TIMER0

    TMOD = 0x01;                            //TIMER0 em Modo 1 (16 bits)
                                            //C/T no Temporizador
                                            //Gate = 0

    //Valores iniciais para 50ms
    TH0 = 0x3C;
    TL0 = 0xB0;

    BOARDLED = 0x00;

    while(1){

    }
}

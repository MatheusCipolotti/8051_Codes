# Interrupção pelo estouro do TIMER0 (Overflow)

Esse exemplo de código, considera a configuração do TIMER0 no MODO 1 (Temporizador/Contador de 16 bits) sendo os registradores TH0 e TL0 usados em cascata (dois registradores formando os 16 bits).

## Função dos registradores

- IEN0 - Registrador de habilitação de interrupção 0
  - EA - Habilita/Desabilita a interrupção global do microcontrolador;
  - ET0 - Habilita/Desabilita o Overflow do TIMER0;

- TCON - Registrador de controle do TIMER0 (Também compreende do TIMER1);
  - TR0 - Habilita/Desabilita o TIMER0;

- TMOD - Registrador para o modo de operação do TIMER0 (Também compreende do TIMER1);
  -  M10 e M00 - Bits que definem o modo de operação do TIMER0;
  -  C/T0# - Bit que seleciona a origem da fonte de clock;
  -  GATE0 - Habilita/Desabilita o TIMER0
 
- TH0 - Registrador High do valor de contagem do TIMER0;

- TL0 - Registrador Low do valor de contagem do TIMER0;

<p align="center">
<img src="https://github.com/user-attachments/assets/6c29d7fe-e157-4397-bae3-d0194b478b33">
</p>
<p align="center">
  Figura 1 - Circuito Digital do Clock do TIMER0 
</p>

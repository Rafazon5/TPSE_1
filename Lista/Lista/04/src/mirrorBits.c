#include <stdio.h>

unsigned char mirror_bits(unsigned char value){
    unsigned char resultado = 0;
    unsigned char bits = 0;

    for(int i = 0; i < 8; i++){
        bits = (value >> i) & 1; // o bit i recebe o bit value, ou seja se value 0101, e i = 2, entao (1) & 1 = 1
        bits = bits << (7 - i); // bit vai receber pela esquerda, ex: 1 << (7 - 2) = 1 << 5, o bit 5 de bits vai ser 1, q antes estava na posição 2
        resultado = resultado | bits;
    }

    return resultado;
}
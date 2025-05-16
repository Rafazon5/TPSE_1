#include <stdio.h>

int compare_bits(unsigned int a, unsigned int b){
    unsigned char dif = a ^ b;
    unsigned char iguais = ~dif;

    int bitsIguais = 0;

    for(int i = 0; i < 8; i++){
        if((iguais >> i) & 1){
            bitsIguais++;   
        }
    }

    return bitsIguais;
}
#include <stdio.h>

void imprime(unsigned char value){

    for(int i = 7; i >= 0; i--){

        printf("%u", (value >> i) & 1);
    }

    printf("\n");
}
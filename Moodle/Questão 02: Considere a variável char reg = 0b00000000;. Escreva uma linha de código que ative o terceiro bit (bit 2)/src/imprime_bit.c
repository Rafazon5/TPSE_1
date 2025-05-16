#include <stdio.h>
#include "bit.h"

void imprime(unsigned char valor){
    for(int i = valor; i>=0; i--){
        printf("%u", (valor >> i) & 1);
    }
    printf("\n");
}
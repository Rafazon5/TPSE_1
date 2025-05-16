#include <stdio.h>

void imprime(unsigned int value){
    for(int i = 32; i >= 0; i--){
        printf("%u", (value >> i) & 1);
    }
}
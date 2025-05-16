#include <stdio.h>

void imprime(unsigned int value){
    for(int i = 8; i >= 0; i--){
        printf("%u", (value >> i) & 1);
    }
}
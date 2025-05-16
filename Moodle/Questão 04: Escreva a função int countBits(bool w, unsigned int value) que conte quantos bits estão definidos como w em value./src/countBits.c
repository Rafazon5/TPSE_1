#include <stdio.h>

int countBits(int w, unsigned int value){
    int cont = 0;
    for(int i = 31; i >=0; i--){
        unsigned int mask = (value >> i) & 1;
        if (mask == w){
            cont++;
        }
    }

    return cont;
}
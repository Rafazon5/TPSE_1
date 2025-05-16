#include <stdio.h>

int cont(unsigned char byte){

    int cont = 0;

    for(int i = 8; i >= 0; i--){
        if((byte >> i) & 1){
            cont++;
        }
    }

    printf("%d\n", cont);
}
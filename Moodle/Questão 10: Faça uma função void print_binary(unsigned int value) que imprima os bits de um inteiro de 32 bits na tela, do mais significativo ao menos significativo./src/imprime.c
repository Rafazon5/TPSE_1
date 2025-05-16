#include <stdio.h>

void print_binary(unsigned int value){

    for(int i = 31; i >= 0; i--){
        printf("%u", i);
    }
    
    printf("\n");

    for(int i = 31; i >= 0; i--){
        printf("%u", (value >> i) & 1);
    }

    printf("\n");
}
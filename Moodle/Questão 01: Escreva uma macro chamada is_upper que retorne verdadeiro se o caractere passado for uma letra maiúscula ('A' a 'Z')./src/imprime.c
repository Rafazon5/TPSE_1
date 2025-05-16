#include <stdio.h>
#include "is_upper.h"

void imprime(char x){
    if(is_upper(x)){
        printf("É uma letra maiscula\n");
    }
    else{
        printf("Não é uma letra maiscula\n");
    }
}
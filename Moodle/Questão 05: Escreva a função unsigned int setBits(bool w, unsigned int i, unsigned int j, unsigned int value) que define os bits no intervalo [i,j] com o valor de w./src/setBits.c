#include <stdio.h>

unsigned int setBits(int w, unsigned int i, unsigned int j, unsigned int value){
    if(w == 0){
        return value = value & ~((1 << (j - i + 1)) - 1) << i;
    }
    else{
        return value = value | ((1 << (j - i + 1)) - 1) << i;
    }
}
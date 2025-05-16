#include <stdio.h>

unsigned char bit(unsigned char reg){
    unsigned char mask = (1 << 3);
    reg = reg | mask;
    return reg;
}
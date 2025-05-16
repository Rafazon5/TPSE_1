#include <stdio.h>

unsigned char muda(unsigned char x){

    return x & ~(1 << 4); // 1101 & ~(1000 < 4) = 1101 & 0111 = 0101
}
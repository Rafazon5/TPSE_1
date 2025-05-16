#include <stdio.h>

unsigned int circular_right(unsigned int x, int n){

    for(int i = 0; i < n; i++){
        unsigned int last = x & 1;
        x = (x >> 1) | (last << 31); 
    }
    return x;
}
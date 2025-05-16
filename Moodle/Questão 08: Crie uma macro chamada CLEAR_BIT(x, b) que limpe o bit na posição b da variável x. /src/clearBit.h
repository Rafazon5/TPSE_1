#ifndef CLEARBIT_H
#define CLEARBIT_H

#define clearBit(x,y) (x &= ~(1 << y))
/*
x = 0101111
0101111 = 0101111 & ~(1 << 2)                (1 << y) = 1 << 2 = 100
0101111 = 0101111 & 011
0101011
*/

#endif
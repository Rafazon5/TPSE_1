#ifndef SWAP_H
#define SWAP_H

#define swap_bits(x, i, j) \
do{ \
    unsigned char bit_i = (x >> i) & 1; \
    unsigned char bit_j = (x >> j) & 1; \
    if(bit_i != bit_j){ \
        x ^= (1 << i); \
        x ^= (1 << j); \
    } \
}while (0); \

void imprime(unsigned int value);

#endif
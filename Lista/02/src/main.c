#include <stdio.h>
#include "swap.h"

int main() {

unsigned char x = 0b11000011;
int i = 3;
int j = 1;

imprime(x);

swap_bits(x, i, j);

imprime(x);

return 0;
}
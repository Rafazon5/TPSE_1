#include <stdio.h>
#include "compare.h"

int main() {

unsigned char a = 0b01010101;
unsigned char b = 0b11110000;
int bits = 0;

imprime(a);
imprime(b);

bits = compare_bits(a, b);

printf("%d\n", bits);

return 0;
}
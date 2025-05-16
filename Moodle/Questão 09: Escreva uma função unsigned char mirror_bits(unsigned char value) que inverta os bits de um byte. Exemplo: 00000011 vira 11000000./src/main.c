#include <stdio.h>
#include "mirrorBits.h"
#include "imprime.h"

int main() {

unsigned char value = 0b10000011;
unsigned char resultado = 0;

imprime(value);
resultado = mirror_bits(value);
imprime(resultado);

return 0;
}
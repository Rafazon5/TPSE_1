#include <stdio.h>
#include "imprime_bit.h"
#include "bit.h"

int main() {

unsigned char reg = 0b0000;

reg = bit(reg);

imprime(reg);

return 0;
}
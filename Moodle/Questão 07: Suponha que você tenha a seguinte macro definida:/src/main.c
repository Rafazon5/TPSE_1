#include <stdio.h>
#include "setBit.h"
#include "imprime.h"

int main() {

unsigned int ctrl = 0b0000;
int bit = 2;

SET_BIT(ctrl, bit);

imprime(ctrl);

return 0;
}
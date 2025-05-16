#include <stdio.h>
#include "clearBit.h"
#include "imprime.h"

int main() {

unsigned int x = 0b0101111;
int y = 2;

clearBit(x, y);

imprime(x);

return 0;
}
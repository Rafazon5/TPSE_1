#include <stdio.h>
#include "rotateBit.h"

int main() {

unsigned char x = 0b10110010;
int n = 3;

imprime(x);

x = circular_right(x, n);
imprime(x);

return 0;
}   
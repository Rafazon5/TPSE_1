#include <stdio.h>
#include "imprime.h"

int main() {

unsigned char x = 0b00110000;
x = ~x; 

imprime(x);

return 0;
}
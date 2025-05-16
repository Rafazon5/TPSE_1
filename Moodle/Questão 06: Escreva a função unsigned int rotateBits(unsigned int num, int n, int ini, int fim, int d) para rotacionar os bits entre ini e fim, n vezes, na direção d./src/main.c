#include <stdio.h>
#include "rotateBits.h"
#include "imprime.h"

int main() {

unsigned int num;
int n, ini, fim, d;

num = 0b1001101100; 
n = 3;
ini = 2;
fim = 6;
d = 0;

unsigned int value = rotateBits(num, n, ini, fim, d);
//unsigned int num, int n, int ini, int fim, int d

imprime(value);

return 0;
}
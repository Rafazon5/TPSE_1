#include <stdio.h>
#include "imprime.h"
#include "countBits.h"

int main() {

int w;
int cont = 0;
unsigned int value;

scanf("%d %u", &w, &value);

cont = countBits(w, value);

imprime(cont);

return 0;
}
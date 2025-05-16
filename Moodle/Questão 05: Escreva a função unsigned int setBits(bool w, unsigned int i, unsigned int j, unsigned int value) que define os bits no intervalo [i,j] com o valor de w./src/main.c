#include <stdio.h>
#include "setBits.h"
#include "imprime.h"

int main() {

int w;
unsigned int i, j, value;

scanf("%d %u %u %u", &w, &i, &j, &value);

value = setBits(w, i, j, value);

imprime(value);

return 0;
}
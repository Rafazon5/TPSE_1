#include <stdio.h>
#include "status.h"

int main() {

unsigned char status = 0b11101111;
unsigned char resposta;

imprime(status);
resposta = muda(status);
imprime(resposta);

return 0;
}
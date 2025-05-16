#include <stdio.h>
#include "structGPIO.h"

int main() {

GPIO_t dados;

dados.enabled = 0;
dados.direction = 1;
dados.level = 1;

print_gpio(dados);

return 0;
}
#include <stdio.h>
#include "structGPIO.h"

void print_gpio(GPIO_t g){
    printf("%u\n", g.enabled);
    printf("%u\n", g.direction);
    printf("%u\n", g.level);
}
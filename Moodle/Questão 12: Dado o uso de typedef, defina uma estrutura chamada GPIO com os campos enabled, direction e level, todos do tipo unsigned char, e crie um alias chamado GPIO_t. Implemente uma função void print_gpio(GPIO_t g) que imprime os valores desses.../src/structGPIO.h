#ifndef STRUCT_GPIO_H
#define STRUCT_GPIO_H

typedef struct{
    unsigned char enabled;
    unsigned char direction;
    unsigned char level;
} GPIO_t;

void print_gpio(GPIO_t g);

#endif
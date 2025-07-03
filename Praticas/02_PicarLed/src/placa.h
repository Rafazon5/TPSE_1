#ifndef PLACA_H
#define PLACA_H

//MODULO DE CLOCK
#define CM_PER_BASE                                                     0x44E00000
#define CM_PER_GPIO1_OFFSET                                             0xAC
#define CM_PER_GPIO1_CLKCTRL            (*(volatile unsigned int*)      (CM_PER_BASE + CM_PER_GPIO1_OFFSET))

//PinMUX 
#define CONTROL_MODULE                                                  0x44E10000
#define CONF_GPMC_A8                                                    0x860 //led 1
#define CONTROL_MODULE_CONF_GPMC_A8     (*(volatile unsigned int*)      (CONTROL_MODULE + CONF_GPMC_A8))

//GPIO1
#define GPIO1_BASE                                                      0x4804C000
#define GPIO1_OE_OFFSET                                                 0x134 //entrada ou saida
#define GPIO1_CLEARDATAOUT_OFFSET                                       0x190 //desliga
#define GPIO1_SETDATAOUT_OFFSET                                         0x194 //liga
#define GPIO1_OE                        (*(volatile unsigned int*)     (GPIO1_BASE + GPIO1_OE_OFFSET))    
#define GPIO1_CLEARDATAOUT              (*(volatile unsigned int*)     (GPIO1_BASE + GPIO1_CLEARDATAOUT_OFFSET))
#define GPIO1_SETDATAOUT                (*(volatile unsigned int*)     (GPIO1_BASE + GPIO1_SETDATAOUT_OFFSET))

//LED
#define LED1 (1 << 24) //pino do led 1

#endif
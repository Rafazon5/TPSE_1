#ifndef PLACA_H
#define PLACA_H

//MODULO DE CLOCK
#define CM_PER_BASE                                                     0x44E00000
#define CM_PER_GPIO1_OFFSET                                             0xAC
#define CM_PER_GPIO1_CLKCTRL            (*(volatile unsigned int*)      (CM_PER_BASE + CM_PER_GPIO1_OFFSET))

//PinMUX 
#define CONTROL_MODULE                                                  0x44E10000
#define CONF_GPMC_A5_OFFSET                                             0x854 //led 4
#define CONF_GPMC_A6_OFFSET                                             0x858 //led 3
#define CONF_GPMC_A7_OFFSET                                             0x85C //led 2
#define CONF_GPMC_A8_OFFSET                                             0x860 //led 1
#define CONF_GPMC_BEN1_OFFSET                                           0x878 //P9_12 (GPIO1_28)
// #define CONF_GPMC_A0_OFFSET                                             0x840 //P9_15 (GPIO_16)
#define CONTROL_MODULE_CONF_GPMC_A5     (*(volatile unsigned int*)      (CONTROL_MODULE + CONF_GPMC_A5_OFFSET))
#define CONTROL_MODULE_CONF_GPMC_A6     (*(volatile unsigned int*)      (CONTROL_MODULE + CONF_GPMC_A6_OFFSET))
#define CONTROL_MODULE_CONF_GPMC_A7     (*(volatile unsigned int*)      (CONTROL_MODULE + CONF_GPMC_A7_OFFSET))
#define CONTROL_MODULE_CONF_GPMC_A8     (*(volatile unsigned int*)      (CONTROL_MODULE + CONF_GPMC_A8_OFFSET))
#define CONTROL_MODULE_CONF_GPMC_BEN1   (*(volatile unsigned int*)      (CONTROL_MODULE + CONF_GPMC_BEN1_OFFSET)) //P9_12 (GPIO1_28)
// #define CONTROL_MODULE_CONF_GPMC_A0     (*(volatile unsigned int*)      (CONTROL_MODULE + CONF_GPMC_A0_OFFSET))   //P9_15 (GPIO_28)                             

//GPIO1
#define GPIO1_BASE                                                      0x4804C000
#define GPIO1_OE_OFFSET                                                 0x134 //entrada ou saida
#define GPIO1_CLEARDATAOUT_OFFSET                                       0x190 //desliga
#define GPIO1_SETDATAOUT_OFFSET                                         0x194 //liga
#define GPIO_DATAIN_OFFSET                                              0x138 //verifica botao
#define GPIO1_OE                        (*(volatile unsigned int*)     (GPIO1_BASE + GPIO1_OE_OFFSET))    
#define GPIO1_CLEARDATAOUT              (*(volatile unsigned int*)     (GPIO1_BASE + GPIO1_CLEARDATAOUT_OFFSET))
#define GPIO1_SETDATAOUT                (*(volatile unsigned int*)     (GPIO1_BASE + GPIO1_SETDATAOUT_OFFSET))
#define GPIO1_DATAIN                    (*(volatile unsigned int*)     (GPIO1_BASE + GPIO_DATAIN_OFFSET))

//LED
#define LED4    (1 << 21) //pino do led 4
#define LED3    (1 << 22) //pino do led 3
#define LED2    (1 << 23) //pino do led 2
#define LED1    (1 << 24) //pino do led 1

//BOTAO
// #define BOT     (1 << 16) //GPIO_16
#define BOT     (1 << 28) //GPIO1_28

#endif
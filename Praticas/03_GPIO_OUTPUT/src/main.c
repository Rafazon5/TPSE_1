#include "placa.h"

void delay (unsigned int cont){
    while(cont){
        cont--;
    }
}

int main() {

    CM_PER_GPIO1_CLKCTRL = 0X02;

    CONTROL_MODULE_CONF_GPMC_BEN1   = 0x07;
    CONTROL_MODULE_CONF_GPMC_A5     = 0x07; 
    CONTROL_MODULE_CONF_GPMC_A6     = 0x07;
    CONTROL_MODULE_CONF_GPMC_A7     = 0x07;
    CONTROL_MODULE_CONF_GPMC_A8     = 0x07;

    GPIO1_OE &= ~(LEDEXT | LED1 | LED2 | LED3 | LED4);
    const unsigned int LEDS[5] = {LEDEXT, LED1, LED2, LED3, LED4};

    while(1){
        for(int i = 0; i < 5; i++){
            GPIO1_SETDATAOUT = LEDS[i];
            delay(0xFFFFF);
            GPIO1_CLEARDATAOUT = LEDS[i];
            delay(0xFFFFF);
        }
        GPIO1_SETDATAOUT = LEDS[0] | LEDS[1] | LEDS [2] | LEDS[3] | LEDS [4] | LEDS[5];
        delay(0xFFFFFF);
        GPIO1_CLEARDATAOUT = LEDS[0] | LEDS[1] | LEDS [2] | LEDS[3] | LEDS [4] | LEDS[5];
        delay(0xFFFFFF);
        for(int i = 5; i >= 0; i--){
            GPIO1_SETDATAOUT = LEDS[i];
            delay(0xFFFFF);
            GPIO1_CLEARDATAOUT = LEDS[i];
            delay(0xFFFFF);
        }
    }

    return 0;
}
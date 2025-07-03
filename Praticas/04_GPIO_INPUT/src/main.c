#include "placa.h"

void delay(unsigned int cont){
    while(cont){
        cont--;
    }
}

int main() {

    int TOGGLE = 0;
    int estado_anterior = 0;

    CM_PER_GPIO1_CLKCTRL = 0x02;

    //BOTAO
    CONTROL_MODULE_CONF_GPMC_BEN1   = 0x07;
    //LEDS
    CONTROL_MODULE_CONF_GPMC_A5     = 0x07; 
    CONTROL_MODULE_CONF_GPMC_A6     = 0x07;
    CONTROL_MODULE_CONF_GPMC_A7     = 0x07;
    CONTROL_MODULE_CONF_GPMC_A8     = 0x07;

    GPIO1_OE &= ~(LED1 | LED2 | LED3 | LED4);
    const unsigned int LEDS[4] = {LED1, LED2, LED3, LED4};
    GPIO1_OE |= BOT;

    while(1){
        int estado_atual = (GPIO1_DATAIN & BOT);

        if(estado_atual != 0 && estado_anterior == 0){
            TOGGLE ^= 1;
        }
        estado_anterior = estado_atual;

        if(TOGGLE){
            for(int i = 3; i >= 0; i--){
            GPIO1_SETDATAOUT = LEDS[i];
            delay(0xFFFFF);
            GPIO1_CLEARDATAOUT = LEDS[i];
            delay(0xFFFFF);
            }
        }
        else{
            for(int i = 0; i < 4; i++){
            GPIO1_SETDATAOUT = LEDS[i];
            delay(0xFFFFF);
            GPIO1_CLEARDATAOUT = LEDS[i];
            delay(0xFFFFF);
            }
        }
        
    }

    return 0;
}
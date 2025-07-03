#include "placa.h"

int main() {
    unsigned char pisca = 0;
    //Ligar a Energia (Configurar o Clock)
    CM_PER_GPIO1_CLKCTRL        = 0x02; //Valor 0x02 significa "Módulo Habilitado"

    //Conectar os Fios (Configurar o PinMux)
    CONTROL_MODULE_CONF_GPMC_A8 = 0x07; //Valor 0x07 define como entrada ou saida (gpio1_24)

    GPIO1_OE &= ~LED1;

    while(1){
        pisca ^= 0x1;
        if(pisca){
            GPIO1_SETDATAOUT = LED1;
        }
        else{
            GPIO1_CLEARDATAOUT = LED1;
        }
        //delay
        for(int i = 0; i < 0xFFFFFFF; i++);
    }

    return 0;
}
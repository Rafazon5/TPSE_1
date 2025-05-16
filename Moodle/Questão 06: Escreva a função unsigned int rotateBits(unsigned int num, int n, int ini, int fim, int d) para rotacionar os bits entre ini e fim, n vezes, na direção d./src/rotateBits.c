#include <stdio.h>

unsigned int rotateBits(unsigned int num, int n, int ini, int fim, int d){
    int bits = fim - ini + 1;
    unsigned int mask = ((1 << bits) - 1) << ini; //mask vai ser 11111 para comparar com num, mask so vai ser 1 a partir do bit de ini, ex: ini = 3, bits = 4, mask = 1000

    unsigned int cont = (mask & num) >> ini; //pego o intervalo [fim, ini], o resultado mask & num vai para o bit de inicio q eh ini, cont vai receber o intervalo trabalhado

    for(int i = 0; i <= n; i++){
        if(d == 1){
            unsigned int last = cont & 1; //vai receber o ultimo bit para jogar ele no inicio, ex: 1101 & 0001 = 0001
            cont = (cont >> 1) | (last << bits - 1); //cont vai mover 1 bit para direita, no caso cont = 1101, vai ficar 0110, o 1 vai embora, com isso vem o or, para q caso last seja 1, o primeiro bit de cont seja 1
        }
        /*
        cont = 1101, deve ficar 1110
        last = 0001
        cont = 0110
        last = 1000, coloco mais 3 bits, q sao 0 para jogar oq estava no final no inicio, depois fica 0110 | 1000
        cont = 1110
        */
        else{
            unsigned int first = (cont >> (bits - 1)) & 1;  
            cont = (cont << 1) & ( (1 << bits) - 1 ) | first;
        }
        /*
        cont = 1101, deve ficar 1011
        first = 1101 >> 3 = 0001 & 0001 = 0001
        cont = 1101 << 1 = 11010
        cont = 11010 & ( (10000) - 1) =  11010 & 01111 = 01010
        cont = 01010 | 0001 = 1011
        */
    }
    return num = (num & ~mask) | (cont << ini);
}
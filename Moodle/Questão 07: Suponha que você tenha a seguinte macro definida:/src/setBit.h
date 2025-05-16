#ifndef SETBIT_H
#define SETBIT_H

#define SET_BIT(REG, BIT) (REG |= (1 << BIT)) // reg = reg | (1 << bit)    reg = 0000

/*
reg = 0000 | (1 << 2)        (1 << 2) = 100
reg = 0000 | 100
reg = 0100
*/

#endif
#include <stdio.h>
#include "isEven.h"

int main() {

int x;
scanf("%d", &x);

printf("%d é: ", x);

if(is_even(x)){
    printf("par\n");
}
else{
    printf("impar\n");
}

return 0;
}
#include <stdio.h>

#include "swap.h"

int main (void){
    
    int a = 8;
    int b = 10;
    printf("Csere elott\n");
    printf("a valtozo erteke: %d\n", a);
    printf("b valtozo erteke: %d\n", b);

    swap(&a, &b);

    printf("Csere utan\n");
    printf("a valtozo erteke: %d\n", a);
    printf("b valtozo erteke: %d\n", b);

    return 0;
}

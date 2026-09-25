#include <stdio.h>

void bitswap(void){
    int number = 6;

    int numberSwap = ~number;

    printf("Eredeti szam: %d\n", number);
    printf("Bit swap: %d\n", numberSwap);
}

int main(){
    bitswap();
    return 0;
}
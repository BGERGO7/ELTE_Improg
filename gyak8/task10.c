#include <stdio.h>
#include "max.h"

int main (void){

    int a = 10;
    int b = 12;

    int* max_value = max(&a, &b);

    if (max_value == NULL){
        printf("Mind a ketto ugyan akkora");
    }

    else {
        printf("A %d nagyobb\n", *max_value);
    }
    return 0;
}
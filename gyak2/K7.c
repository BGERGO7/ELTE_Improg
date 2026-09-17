#include <stdio.h>

#include <limits.h>


int main(){

    int min = INT_MIN;
    int max = INT_MAX;

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    printf("Max + 1: %d\n", max + 1);

    return 0;
}
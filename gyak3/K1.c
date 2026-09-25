#include <stdio.h>


void increment(void){
    int i = 0;
    int j = ++i;

    printf("Prefix: j = ++i -> i=%d, j=%d\n", i, j);
    i = 0;
    j = i++;

    printf("Postfix: j = i++ -> i=%d, j=%d\n", i, j);
}

int main(){
    printf("Hello World!\n");
    increment();
    return 0;
} 


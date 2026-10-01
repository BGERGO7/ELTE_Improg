#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void op_chain(void){
    int a, b, c;
    a = 1; b = 1; c = 1;
    printf("%d == %d == %d is", a, b, c);
    (a == b == c) ? printf("True\n") : printf("False\n"); // True

    a = 0; b = 1; c = 2;
    printf("%d == %d == %d is", a, b, c);
    (a == b == c) ? printf("True\n") : printf("False\n"); // False

    a = 2; b = 1; c = 0;
    printf("%d == %d == %d is", a, b, c);
    (a == b == c) ? printf("True\n") : printf("False\n"); // True??? // 2 == 1 False (0) == 0 TRUE

    a = 0; b = 0; c = 0;
    printf("%d == %d == %d is", a, b, c);
    (a == b == c) ? printf("True\n") : printf("False\n"); // False ????  // 0 == 0 True (1) == 0 FALSE
}

void decrement(void){

    for (int i = 10; i >= 0; i--)
    {
        printf("%d. (int)\n", i);
    }
    /*
    for (unsigned int i = 10; i >= 0; i--) // unsigned mindig pozitiv!!
    {
        printf("%u. (uint)\n", i);
    }
    */
    for (unsigned int i = 11; i >= 1; i--) // most mar jo
    {
        printf("%u. (uint)\n", i);
    }
    
}

int dice(void){

    return rand() % 6 + 1;
}

int main(){
    srand(time(NULL));
    printf("Hello world!\n");
    //op_chain();
    //decrement();

    for (int i = 0; i < 10; i++)
    {
       printf("%d\n", dice());
    }
    
    return 0;
}
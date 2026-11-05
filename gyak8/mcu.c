// gcc -Wall -Wextra -pedantic -c main.c　
// gcc -Wall -Wextra -pedantic -c mcu.c 
// gcc -Wall -Wextra -pedantic -o main.out main.o mcu.o
#include <stdio.h>

extern char* g; // valaki altal mar korabban letrehozott valtozora hivatkozunk
static int g2 = 2;  // lathatosag csokkentjuk, "elfedjuk" a linker elol, ALACSONYABB SZINTU GLOBALIS VALTOZO
// externel nem adhatunk erteket!!

void task8 (void){
    printf("task 8 vagyok\n");
    printf("mcu: %s\n", g);
    printf("g2: %d\n", g2);
    g = "mcu-global";
}

void task8b (void){
    static int counter = 0; // elettartam kibovites!
    counter++;
    printf("A fv hivasainak szama: %d\n", counter);
}

int* task8c (void){
    static int counter = 0; // elettartam kibovites!
    counter++;
    return &counter;
}

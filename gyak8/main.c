#include <stdio.h>

#include "mcu.h"

char* g = "global";
int g2;

void fv (void){
    char* f = "fv-local";
    printf("fv: %s\t%s\n",f, g);
    g = "fv-global";
}

int mathf(int negal); // main folott kell deklaralni!
//int mathf(int kettoz, int n); // overload (tulterheles) nincs C ben!
int mathf2(int kettoz); 

int main(void){
    char* m = "main-local";
    printf("main: %s\t%s\n", m, g);
    g = "main-global";
    fv();
    printf("main: %s\t%s\n", m, g);

    g2 = 10;
    printf("Negalas: %d\n", mathf(g2));
    printf("Kettozes: %d\n", mathf2(g2));
    
    for (int i = 0; i < 10; i++)
    {
        task8b();
        task8c();
    }
    
    task8();


    return 0;
}

int mathf(int negal){
    return -negal;
}

int mathf2(int kettoz){
    return kettoz*2;
}


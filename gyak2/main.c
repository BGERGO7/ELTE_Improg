#include <stdio.h>

#include <stdbool.h> // ha bool al is akarunk dolgozni
#include <limits.h>
#include <math.h>  // -lm

int main(){
    printf("Hello World!\n");

    //lebegopontos szamok "zajosak"

    /*
    for (float i = 0.0; i <= 1.0; i+=0.1)
    {
        printf("%.10f\n", i);
    }

    */

    for (int i = 0; i <= 10; i+=1)
    {
        printf("%.10f\n", i*0.1);
    }
    return 0;
    
}
#include <stdio.h>

void rect(void){
    int a;
    int b;

    printf("Add meg az 'a' oldalt: \n");
    scanf("%d", &a);

    printf("Add meg a 'b' oldalt: \n");
    scanf("%d", &b);

    printf("Terulet: %d\n", a*b);
    printf("Kerulet: %d\n", (2*a) + (2*b));
}

int main(){

    rect();
    
    return 0;
}
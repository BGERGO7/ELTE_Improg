#include <stdio.h>

void numbers(void){
    int a;
    int b;

    printf("Elso szam: \n");

    scanf("%d", &a);

    printf("Masodik szam: \n");
    scanf("%d", &b);

    printf("Osszeadas: a+b=%d\n", (a+b));

    printf("Kivonas: a-b=%d\n", (a-b));

    printf("Szorzas: a*b=%d\n", (a*b));

    printf("Osztas: a/b=%f\n", ((double)a/b));
}


int main(){
    printf("Hello World!\n");
    numbers();
    return 0;
} 


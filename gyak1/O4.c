#include <stdio.h>
#include <math.h>

int main( void ){

    int a;
    int b;
    int r;

    printf("a oldal: ");
    scanf("%d", &a);
    printf("b oldal: ");
    scanf("%d", &b);

    printf("Negyszog terulete: %d\n", a*b);

    printf("kor sugara: ");
    scanf("%d", &r);

    printf("Kor terulete: %f\n", pow(r,2)*3.1415);
    printf("Kor kerulete: %f\n", 2*r*3.1415);
}

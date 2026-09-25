#include <stdio.h>
#include <math.h>

void circle(void){
    int r;

    printf("Add meg a kor sugarat! (cm): \n");

    scanf("%d", &r);

    printf("Kor atmeroje: %d (cm)\n", (2 * r));
    printf("Kor kerulete: %f (cm)\n", (2 * r * M_PI));
    printf("Kor terurelet: %f (cm)\n", (pow(r, 2) * M_PI));
}

int main(){
    circle();
    return 0;
}
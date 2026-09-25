#include <stdio.h>

void swap(void){

    int a;
    int b;

    printf("Add meg az elso szamot (a): \n");
    scanf("%d", &a);


    printf("Add meg a masodik szamot (b): \n");
    scanf("%d", &b);

    a = a + b;  
    b = a - b;  
    a = a - b;  

    printf("a = %d, b = %d\n", a, b);
}

int main(){
    swap();
    return 0;
}

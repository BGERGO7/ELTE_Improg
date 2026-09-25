#include <stdio.h>

void date(void){
    int date;

    printf("Adj meg egy datumot egybe irva: \n");

    scanf("%d", &date);

    int year = date / 10000;
    int month = (date / 100) % 100;
    int day = date % 100;

    printf("%04d-%02d-%02d\n", year, month, day);
}

int main(){
    date();
    return 0;
}

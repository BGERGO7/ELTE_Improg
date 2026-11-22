#include <stdio.h>
#include <stdlib.h>
//dinamikus memoriakezeles

#include "safeio.h"
#include "shared.h"

int* dyn_task(int* counter){
    int* numbers = NULL;

    printf("\nKerem a szam sort (betuvel vege): ");

    int i = 0;

    int num;
    while (scanf("%d", &num) == 1)
    {
        if(i % GROW == 0){
            int* temp = (int*)realloc(numbers, (i+GROW)*sizeof(int));
            if(temp == NULL){
                printf("Realloc error");
                *counter = i;
                return numbers;
            }
            printf("Sikeres realloc! Uj elemszam %d \t (%p)\n", i+GROW, (void*)temp);
            numbers = temp;
        }
        numbers[i] = num;
        i++;
    }
    clear_stream();

    *counter = i;
    return numbers;
    
}

int main(void){

    printf("Kerek egy szoveget: ");
    char* str = stringin();
    printf("A hatekony string: %s\n", str);
    // strlen() -string merete
    // sizeof(str) - tarhely merete
    free(str);

    int n;
    int* num = dyn_task(&n);
    printf("A beolvasott szamok szama: %d\n", n);
    free(num);  //!

    num = dyn_task(&n);
    printf("A masodik koros beolvasott szamok szama: %d\n", n);
    free(num);

    int nw = 10;
    char* wordss[5]; // statikus tarolo 
    char** wordsd = (char**)malloc(nw*sizeof(char*)); // dinamikus tarolo
    if(wordsd == NULL){
        printf("Malloc error!");
        return 1;
    }

    return 0;
}

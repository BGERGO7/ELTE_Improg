#include <stdlib.h>
#include <stdio.h>

#include "task3h.h"
#include "safeio.h"

void reverse_list(void){
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
                free(numbers);
                return;
            }

            printf("Sikeres realloc! Uj elemszam %d \t (%p)\n", i+GROW, (void*)temp);
            numbers = temp;
        }
        numbers[i] = num;
        i++;
    }
    clear_stream();

    printf("Forditott sorrendben:\n");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d\n", numbers[j]);
    }

    free(numbers);
}

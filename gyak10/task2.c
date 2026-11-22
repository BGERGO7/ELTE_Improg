#include <stdio.h>
#include <stdlib.h>

#include "task2h.h"

int main(void)
{
    char **words = read_words();

    if (words == NULL) {
        printf("Nem sikerult memoriat foglalni\n");
        return 1;
    }


    printf("Forditott sorrendben:\n");
    print_words_reversed(words);

    free_words(words);
    free(words);

    return 0;
}

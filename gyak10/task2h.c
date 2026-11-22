#include <stdio.h>
#include <stdlib.h>

#include "safeio.h"
#include "task2h.h"

char **read_words(void)
{
    char **words = malloc(5 * sizeof (*words));

    if (words == NULL) {
        return NULL;
    }


    for (int i = 0; i < 5; i++) {
        printf("%d. szo: ", i + 1);
        words[i] = stringin();

        if (words[i] == NULL) {
            free_words(words);
            free(words);
            return NULL;
        }
    }

    return words;
}

void print_words_reversed(char **words)
{
    for (int i = 5; i > 0; i--) {
        printf("%s\n", words[i - 1]);
    }
}

void free_words(char **words)
{
    for (int i = 0; i < 5; i++) {
        free(words[i]);
    }
}

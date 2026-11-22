#include <stdio.h>
#include <stdlib.h>

#include "task1h.h"

int main(void)
{
    printf("Kerek egy szoveget: ");
    char str[TASK1_BUFFER_SIZE];

    if (read_task1_string(str) == NULL) {
        return 1;
    }


    char *copy = copy_string(str);

    if (copy == NULL) {
        return 1;
    }

    printf("Eredeti: %s\n", str);
    printf("Masolat: %s\n", copy);

    free(copy);

    return 0;
}

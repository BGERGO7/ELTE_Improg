#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "safeio.h"
#include "task1h.h"

char *read_task1_string(char *str)
{
    char *result = fgets(str, TASK1_BUFFER_SIZE, stdin);

    if (result == NULL) {
        return NULL;
    }


    char *newline = strchr(str, '\n');
    if (newline != NULL) {
        *newline = '\0';
    } else {
        clear_stream();
    }

    if (strlen(str) > TASK1_MAX_LENGTH) {
        str[TASK1_MAX_LENGTH] = '\0';
    }

    return result;
}

char *copy_string(char *str)
{
    int length = strlen(str);
    char *copy = malloc((length + 1) * sizeof *copy);

    if (copy == NULL) {
        return NULL;
    }

    strcpy(copy, str);
    return copy;
}

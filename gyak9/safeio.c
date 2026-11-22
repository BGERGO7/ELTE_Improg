#include <stdio.h>
#include <string.h>

#include "shared.h"


void clear_stream(void){
    int c;
    while((c = getchar()) != '\n' && c != EOF );
}

char* read_string(char str[]){
    char* c = fgets(str, BUFFER, stdin);
    
    if (c == NULL) return c;

    if(strchr(str, '\n') != NULL){
        *strchr(str, '\n') = '\0';
    } else{
        clear_stream();
    }

    return c;
}
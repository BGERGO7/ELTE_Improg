#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

// hatekony string olvaso (heap-re: csak szukeges merteku memoriat hasznal)
char* stringin(void){
    char temp_str[BUFFER];
    read_string(temp_str);

    int n = strlen(temp_str) + 1; // \0 nak kell memoria

    char* final_str = (char*)malloc(n * sizeof(char)); // pointert ad vissza, az elso elemre, mint a tombok

    if(final_str == NULL){
        printf("Malloc error");
        return NULL;
    }
    //calloc(); 

    memset(final_str, '\0', n); //opcionalis

    strcpy(final_str, temp_str);


    return final_str;

}

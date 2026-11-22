//gcc -Wall -Wextra -pedantic -o main.out main.c safeio.c

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "safeio.h"
#include "shared.h"

#define BUFFER256 256

void file (void){
    FILE* fin;
    FILE* fout;

    char fn[] = "autok.txt";
    char* fn2 = "autok2.txt";

    fin = fopen(fn, "r"); // r - read
    if(fin == NULL){
        printf("Az allomany nem letezik: %s\n", fn);
        return;
    }
    
    
    //fout = fopen(fn2, "w"); //w - write
    fout = fopen(fn2, "a"); // a - append
    
    char line[BUFFER256];
    while(fgets(line, BUFFER256, fin)){
        // todo
        fprintf(fout, "%s", line);
    }

    fclose(fin);
    fclose(fout);
}

void task1(void){
    char str[BUFFER];
    printf("Kerek egy szoveget: ");
    read_string(str);
    int szavak = 0;
    int szoban_van = 0;
            
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace((unsigned char)str[i])) {
            szoban_van = 0;
        } else if (szoban_van == 0) {
            szoban_van = 1;
            szavak++;
        }
    }

    printf("%s -> meret: %lu, szavak szama: %lu\n", str, strlen(str));
}

void task2(void){
    char str2[BUFFER];
    printf("Kerek egy masik szoveget: ");
    read_string(str2);
            
    printf("Osszehasonlitas:\n");
    int res = strcmp(str, str2);
    if(res == 0){
        printf("A ket string megegyezik\n");
    }else if(res < 0){
        printf("Az elso nagyob elorebb van mint a masik\n");
    }else{
        printf("Az masodik nagyob elorebb van mint az elso\n");
    }
}

void task3(void){
    char s1[BUFFER];
    char s2[BUFFER];
    printf("Kerek egy szoveget: ");
    read_string(s1);

    strcpy(s1, s2);
    printf("Eredeti: %s -> meret: %lu\n", s1, strlen(s1));
    printf("Masolat: %s -> meret: %lu\n", s2, strlen(s2));
}

void task4(void){
    char a[] = "autok.txt";
    char* b = "autok2.txt";

    a[2] = 'x';
            
    //b[2] = 'y'; // szegmentalasi hiba

}


void task5(void){
    FILE* fin;

    char fn[] = "autok.txt";

    fin = fopen(fn, "r"); // r - read
    if(fin == NULL){
        printf("Az allomany nem letezik: %s\n", fn);
        return;
    }
    
    
    int i = 0;
    char line[BUFFER256];

    while(fgets(line, BUFFER256, fin)){
        while(line[i]){
            line[i] = toupper(line[i]);
            i++;
        }
        i = 0;
        printf("%s", line);
    }

    fclose(fin);
}

void task6(void){
    FILE* fin;
    FILE* fout;

    char fn[] = "autok.txt";
    char* fn2 = "autok2.txt";

    fin = fopen(fn, "r");
    if(fin == NULL){
        printf("Az allomany nem letezik: %s\n", fn);
        return;
    }
    
    
    fout = fopen(fn2, "a");

    char line[BUFFER256];
    int i = 0;

    while(fgets(line, BUFFER256, fin)){
        while(line[i]){
            line[i] = toupper(line[i]);
            i++;
        }
        i = 0;
        fprintf(fout, "%s", line);
    }
    
    fclose(fin);
    fclose(fout);
}

int main (int argc, char *argv[]){
    
    if(argc < 2){
        printf("Hiba! Nincs feladat szama");
        return 1;
    }

    switch(*argv[1]){
        case '1':
            printf("1. feladat\n");
            task1();
            break;
        case '2':
            printf("2. feladat\n");
            task2();
            break;
        case '3':
            printf("3. feladat\n");
            task3();
            break;
        case '4':
            printf("4. feladat\n");
            task4();
            break;
        case '5':
            printf("5. feladat\n");
            task5();
            break;
        case '6':
            printf("6. feladat\n");
            task6();
            break;
    }

    return 0;
}
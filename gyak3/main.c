#include <stdio.h>
#include <ctype.h>

void increment(void){
    int i = 0;
    int j = ++i;

    printf("Prefix: j = ++i -> i=%d, j=%d\n", i, j);
    i = 0;
    j = i++;

    printf("Postfix: j = i++ -> i=%d, j=%d\n", i, j);
}

void little_big(void);

int main(){
    printf("Hello World!\n");
    increment();
    little_big();
    return 0;
} 


void little_big(void){
    char l;

    do
    {
        printf(">> Kerek betuket: \n");
        
        scanf(" %c", &l);   // egy karaktert olvas, ami nem whitespace

        /*
        scanf("%c", &l);    // egy karaktert olvas

        scanf("%c ", &l);   // egy karaktert olvas, de addig tovabbolbas, amig nem er el egy NEM whitespacet

        //scanf("%c %c", &l, &l2);
        */

        if(isalpha(l)){
            printf("Betu: %c\n", l);
            if(isupper(l)){
                printf("Kicsiben: %c\n", tolower(l));
            }
            if(islower(l)){
                printf("Nagyban: %c\n", toupper(l));
            }
        }else if(l != '0'){
            printf("Nem betu! Ujra!\n");
        }
    } while (l != '0');

    printf("Viszlat!\n");
    
}

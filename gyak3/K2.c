#include <stdio.h>
#include <ctype.h>

void little_big(void);

int main(){
    printf("Hello World!\n");
    little_big();
    return 0;
} 


void little_big(void){
    char l;

    do
    {
        printf(">> Kerek betuket: \n");
        
        scanf(" %c", &l); 

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

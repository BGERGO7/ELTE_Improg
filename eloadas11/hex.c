#include <stdio.h>
#include <ctype.h>

#define BUFFSIZE 16

void hd(FILE *fp);
void pr(int address, unsigned char buffer[], int cnt);

int main(int argc, char* argv[]){
    int ret = 0;
    if(argc < 2){
        hd(stdin);
    }else{
        for (int i = 1; i < argc; i++) // elso parameter a program neve
        {
            FILE  *fp = fopen(argv[i], "rb"); // b windowshoz kell!
            if(NULL == fp){
                fprintf(stderr, "Can't open %s\n", argv[i]);
                ++ret;
            }
            else{
                hd(fp);
                fclose(fp); //! csak akkor ha nem NULL pointer 
            }
            
        }
        
    }    
    return ret;
}

void hd(FILE *fp){

    int ch;
    int cnt = 0;
    char buffer[BUFFSIZE];
    int address = 0;

    while (EOF != (ch = fgetc(fp)))
    {
        buffer[cnt] = ch;
        ++cnt;

        if(BUFFSIZE == cnt){
            pr(address, buffer, cnt); // cnt == 16
            address+=cnt;
            cnt = 0;
        }
    }
    if(cnt > 0){
        pr(address, buffer, cnt); // ha a bufferben meg maradt elem!, nem buffer meretu hanem cnt meretut kell kiirni
    }
}

void pr(int address, unsigned char buffer[], int cnt){
    printf("%08x  ", address);
    for (int i = 0; i < cnt; i++)
    {
        printf(" %02x", buffer[i]);
    }
    for (int i = cnt; i < BUFFSIZE; i++)
    {
        printf("   "); // egy hex az 3 space hosszu itt
    }
    
    printf(" |");
    for (int i = 0; i < cnt; i++)
    {
        putchar(isgraph(buffer[i]) ? buffer[i] : '.');
    }
    printf("|\n");
}

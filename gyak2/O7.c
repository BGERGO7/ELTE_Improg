#include <stdio.h>

int main(){
    
    for(int sor = 1; sor <= 8; sor += 1){
        for(int oszlop = 1; oszlop <= 8; oszlop += 1){
            if(sor % 2 == 0){
                if(oszlop % 2 == 0){
                    printf("  ");
                }else if(oszlop % 2 != 0){
                    printf("[]");
                }
            }else if(sor % 2 != 0){
                if(oszlop % 2 == 0){
                    printf("[]");
                }else if(oszlop % 2 != 0){
                   printf("  ");
                }
            }
        }
        printf("\n");
    }
    
    return 0;
    
} 
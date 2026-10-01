#include <stdio.h>

int main(void){

    int number;
    do
    {
        printf("Please give a number between 1 and 12\n");
        scanf("%d", &number);

        if(number > 12 || number < 1){
            printf("Wrong number, try again!\n");
        }

    } while (number > 12 || number < 1);

    switch (number)
    {
        case 12:
        case 1:
        case 2: printf("Winter\n"); break;
        case 3:
        case 4:
        case 5: printf("Spring\n"); break;
        case 6:
        case 7:
        case 8: printf("Summer\n"); break;
        case 9:
        case 10:
        case 11: printf("Fall\n"); break;
        
    }
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_target(void){
    printf("Choose a difficulty! (1-3)\n");
    printf("Easy 1 - 10 (1)\n");
    printf("Medium 1 - 100 (2)\n");
    printf("Hard 1 - 1000 (3)\n");
    int difficulty;

    do
    {
        scanf("%d", &difficulty);
        if (difficulty < 1 || difficulty > 3) {
            printf("Invalid difficulty! Choose 1, 2 or 3.\n");
        }
    } while (difficulty < 1 || difficulty > 3);

    int randomRange;
    switch (difficulty)
    {
        case 1: randomRange = 10; break;
        case 2: randomRange = 100; break;
        case 3: randomRange = 1000; break;
    }

    return randomRange;
}

int guessing(int randomRange){
    const int number = rand() % randomRange + 1;
    printf("Number: %d\n", number);
    int guess;
    int guessCount = 0;

    printf("Guess a number!\n");
    
    do
    {
        scanf("%d", &guess);
        (guess != number) ? printf("Try again!\n") : printf("You won!\n");
        if (guess != number){
            guessCount++;
        }
    } while (guess != number);
    
    printf("Number of guesses: %d\n", guessCount);

    return guessCount;
}

void evaluate (int guessCount){
     switch (guessCount)
    {
        case 1:
            printf("You are lucky\n");
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Not bad!\n");
            break;
        default:
            printf("You can do better!\n");
            break;
    }
}

int main(void){
    srand(time(NULL));

    printf("Guessing game!\n");

    int randomRange = get_target();
    int guessCount = guessing(randomRange);
    evaluate(guessCount);

    return 0;
}

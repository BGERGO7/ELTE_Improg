#include <stdio.h>
#include <limits.h>
#include <ctype.h>

#define N 5
#define BUFFER 20

#define STRV(x) STR(x)
#define STR(x) #x

void task1 (void){
    int arr1[N] = {0,0,0,0,0};
    int arr2[N] = {0};
    int arr3[N] = {1};
    int arr4[N] = {2,3};
    int arr5[N];

    for (int i = 0; i < N; i++)
    {
        printf("%d, \t %d, \t %d, \t %d, \t %d \t\n", arr1[i], arr2[i], arr3[i], arr4[i], arr5[i]);
    }
    printf("\n");
    
    // int arr2D[2][3];

    int arr[] = {1,2};

    size_t n = sizeof(arr) / sizeof(arr[0]);
    printf("A tomb merete: %lu\n", n);
    printf("\n");
}

void task2 (void){
    printf("Task2\n");

    int arr[] = {1,2,3,4,5};

    size_t n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    
    printf("Osszeg: %d\n", sum);
    printf("\n");
}

void task3 (void){
    printf("Task3\n");

    int arr[] = {49,3,9,12,3,4};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    printf("Tomb: ");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }
    
    printf("\n");
    int min = INT_MAX;

    for (size_t i = 0; i < n; i++)
    {
        if (arr[i] < min){
            min = arr[i];
        }
    }
    
    printf("Legkisebb elem erteke: %d\n", min);
    printf("\n");
}

void task4(void){
    printf("Task4\n");

    int arr[] = {49,3,9,12,3,4};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    printf("Tomb: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", arr[i]);
    }
    
    printf("\n");
    int min = INT_MAX;
    int min2 = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min) {
            min2 = min;
            min = arr[i];
        } else if (arr[i] < min2 && arr[i] != min) {
            min2 = arr[i];
        }
    }
    
    printf("Masodik legkisebb elem erteke: %d\n", min2);
    printf("\n");
}

void task5(void){
    printf("Task5\n");

    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,1,2,3,5};

    size_t n = sizeof(arr1) / sizeof(arr1[0]);

    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        sum = sum + (arr1[i]*arr2[i]);
    }
    
    printf("Osszeg: %d\n", sum);
    printf("\n");
}

void task6(void){
    printf("Task6\n");

    double arr1[] = {1,2,3,4,5};
    double arr2[] = {1,1,2,3,5};

    size_t n = sizeof(arr1) / sizeof(arr1[0]);

    double sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        sum = sum + (arr1[i]*arr2[i]);
    }

    double avg = sum / n;
    
    printf("Atlag: %f\n", avg);
    printf("\n");
}

void task7(void){
    printf("Task7\n");

    char str1[] = "ablak";
    char str2[] = "Szek";

    int i = 0; 
    while (str1[i] != '\0' && str1[i] == str2[i]) {
        i++;
    }

    int res = tolower(str1[i]) - tolower(str2[i]);

    if (res < 0) {
        printf("%s van elorebb.\n", str1);
    } else if (res > 0) {
        printf("%s van elorebb.\n", str2);
    } else {
        printf("A ket sztring teljesen megegyezik.\n");
    }

    printf("\n");
}

void task8(void){
    char input[BUFFER+1];
    printf("Kerem a szoveget: (max:%d) ", BUFFER);
    //scanf("%20[^\n]s", input);          //mindent elfogad, ami NEM \n  ES 20 karakter            // !!!! nincs &
    scanf("%"STRV(BUFFER)"[^\n]s", input);  // dupla define!
    printf("A kapott szoveg %s\n", input);

    size_t str_size = 0;

    while (input[str_size] != '\0')
    {
        str_size++;
    }

    printf("A szoveg karakerelemeinek a szama: %lu\n", str_size);
    
}

int main(void){
    //task1();
    task2();
    task3();
    task4();
    task5();
    task6();
    task7();
    //task8();

    return 0;
}

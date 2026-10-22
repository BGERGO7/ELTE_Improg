#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 4
#define M 6
#define H 10

//void multi_table(int matrix[N][M]){
void multi_table(int matrix[][M], size_t n){ // meg kell adni hogy mekkora a belso tombok merete, hogy tudja mennyit kell ugrani
    for (size_t r = 0; r < n; r++)
    {
       for (size_t c = 0; c < M; c++)
       {
            matrix[r][c] = (r+1)*(c+1);
       }
       
    }
    
}

void print2d(int matrix[N][M]){
    for (size_t r = 0; r < N; r++)
    {
       for (size_t c = 0; c < M; c++)
       {
            printf("%lu x %lu = %d\t", r+1, c+1, matrix[r][c]);
       }
       printf("\n");
    }
    printf("\n");
    
}

void summer(int n, int* psum){
    *psum = 0;
    for (int i = 1; i <= n; i++)
    {
        *psum += i;
    }
    
}

void task3(int num){
    int sum = 0;
    for (size_t i = 0; i <= H; i++)
    {
        sum += pow(num, i);
    }

    printf("A %d szam elso %d hatvanya: %d\n", num, H, sum);
    
}

void task4(double randArray[], size_t n){

    int greater = 0;
    for (size_t i = 0; i < n; i++)
    {
        randArray[i] = (double) rand() / (double) RAND_MAX * 100.0;
        printf("%lu. elem: %f\n", (i+1), randArray[i]);

        if (randArray[i] > 50.0)
        {
            greater++;
        }
    }

    printf("Az 50-nel nagyobb elemek szama: %d\n", greater);

    
}

void task5(int array[], size_t n, int* zCount, int* pCount, int* nCount){

    
    for (size_t i = 0; i < n; i++)
    {
        array[i] = rand() % 5 - 2;
        printf("%lu. elem: %d\n", i + 1, array[i]);

        if(array[i] > 0){
            (*pCount)++;
        }else if(array[i] < 0){
            (*nCount)++;
        }else{
            (*zCount)++;
        }
    }

}


void task6(int array[], size_t n) {
    for (size_t i = 0; i < n / 2; i++) {
        int temp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = temp;
    }
}

int main(int argc, char *argv[]){
   /*
    printf("Kapott kulso adatok szama: %d\n", argc);
    printf("Az elso adat: %s\n", argv[0]);


    
    int num;
    if (argc > 1)
    {
        num = atoi(argv[1]); // ascii to int, stdlib-ben
        printf("A kapott szam: %d\n", num);
    }else{
        printf("Hianyzo argumentum\n");
        return -1; //hibakod
    }
    
    
    int matrix[N][M];

    multi_table(matrix, N);
    print2d(matrix);

    int n = 5;
    int sum;
    summer(n, &sum);
    printf("A szamok osszege 1-tol %d-ig: %d\n", n, sum);

    */

    // Feladatok
    srand(time(NULL));

    printf("3.feladat\n");
    if (argc > 1){
        task3(atoi(argv[1]));
    }else{
        printf("Add meg a szamot, amit hatvanyozni akarsz!\n");
        return -1;
    }


    printf("4.feladat\n");
    double randArray[5];
    
    size_t n = sizeof(randArray) / sizeof(randArray[0]);
    task4(randArray, n);


    int array[5];
    n =  sizeof(array) / sizeof(array[0]);
    int zCount = 0;
    int pCount = 0;
    int nCount = 0;
    task5(array, n, &zCount, &pCount, &nCount);
    printf("5. feladat: 0: %d db, pozitiv: %d db, negativ: %d db\n", zCount, pCount, nCount);

    int array2[] = {1, 2, 3, 4, 5};
    n = sizeof(array2) / sizeof(array2[0]);
    task6(array2, n);

    printf("6. feladat: Megforditott tomb:\n");
    for (size_t i = 0; i < n; i++) {
        printf("%d\n", array2[i]);
    }

    return 0;
}

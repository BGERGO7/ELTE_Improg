#include <stdio.h>

int sum_arr(int array[], size_t n){
    int sum = 0;
    //size_t n = sizeof(array)/sizeof(array[0]); //pointer!!
    printf("A tomb merete (fv): %lu\n", n); // 8/4=2 ha nem adom at az n-t

    for (size_t i = 0; i < n; i++)
    {
        sum += array[i];
    }
    
    return sum;
}

int sum_arr2(int* array, int* end){     // [array end)
    int sum = 0;

    for ( ; array < end; array++)
    {
        sum += *array;
    }
    
    return sum;
}

double sum_avg2(int* array, int* end){     // [array end)
    int sum = 0;

    for (int* pi= array ; pi < end; pi++)
    {
        sum += *pi;
    }
    
    return (double)sum / (end - array);
}

int* local_point(void){
    int local = 7;
    int* p = &local;

    return p;

}

int main(void){

    int* pl = local_point();
    printf("VIV ertek: %d\n", *pl);
    int i = 8;

    printf("Az i valtozo memoriacime %p es ertekee %d\n", (void*)&i, i);  //(void*) tipustalanitas

    int* p = &i;

    printf("A p valtozo memoriacime %p es ertekee %p\n", (void*)&p, (void*)p);
    printf("A p altal hivatkozott memoriacim %p es ertekee %d\n", (void*)&(*p), *p);

    int* q, *r = &i;  // q pointer, de r sima valtozo

    printf("A q valtozo memoriacime %p es ertekee %p\n", (void*)&q, (void*)q);
    printf("A r valtozo memoriacime %p es ertekee %p\n", (void*)&r, (void*)r);

    i++;
    printf("Az i ertekenek novelese\n");
    printf("A p valtozo memoriacime %p es ertekee %p\n", (void*)&p, (void*)p);
    printf("A p altal hivatkozott memoriacim %p es ertekee %d\n", (void*)&(*p), *p);
    
    (*p)++;
    printf("Az i indirekt novelese\n");
    printf("A p valtozo memoriacime %p es ertekee %p\n", (void*)&p, (void*)p);
    printf("A p altal hivatkozott memoriacim %p es ertekee %d\n", (void*)&(*p), *p);

    /*
    p++;
    //printf("Az i indirekt novelese\n");
    printf("A p valtozo memoriacime %p es ertekee %p\n", (void*)&p, (void*)p);
    printf("A p altal hivatkozott memoriacim %p es ertekee %d\n", (void*)&(*p), *p);
    */

    int j = 12; 
    int* p1 = &j;
    int* p2 = p1; 
    int** p3 = &p1;

    printf("eredeti j = %d\n", j);
    printf("p2 inc j = %d\n", ++(*p2));
    printf("p3 inc j = %d\n", ++(**p3));

    void* pg = &pg;
    printf("A pg valtozo memoriacima %p es erteke %p\n", (void*)&pg, (void*)pg);
    //*pg;

    printf("Short Int Pointer: %lu bajt\n", sizeof(short int*));
    printf("Int Pointer: %lu bajt\n", sizeof(int*));
    printf("Long Int Pointer: %lu bajt\n", sizeof(long int*));
    printf("Double Pointer: %lu bajt\n", sizeof(double*));

    int* pN = NULL;

    if(pN != NULL){
        // todo
    }else{
        printf("Null pointer!\n");
    }

    int array[] = {1,2,3,4,5};
    size_t n = sizeof(array)/sizeof(array[0]);
    printf("A tomb merete: %lu\n", n);
    printf("A tomb elemeinek az osszege (1): %d\n", sum_arr(array, n));
    printf("A tomb elemeinek az osszege (2): %d\n", sum_arr2(array, array+n));
    printf("A tomb elemeinek az osszege: %f\n", sum_avg2(array, array+n));

    //int scanf(const char *format, Object *arg(s)); // a scanf fuggveny 


    printf("VIV ertek: %d\n", *pl); // nem 7!!! memoriaszemet
    
    int loc = 5;
    printf("A p valtozo memoriacime %p es ertekee %d\n", (void*)&loc, loc);
    {
        int loc = 15;
        printf("A p valtozo memoriacime %p es ertekee %d\n", (void*)&loc, loc);
        loc += 10;
        printf("A p valtozo memoriacime %p es ertekee %d\n", (void*)&loc, loc);
    }
    printf("A p valtozo memoriacime %p es ertekee %d\n", (void*)&loc, loc);

    return 0;
}

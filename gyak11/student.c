#include <stdlib.h>
#include <stdio.h>

#include "student.h"

void s_array_init(int s_id[], double s_avg[], short int s_age[], int n){
    for (int i = 0; i < n; i++)
    {
        s_id[i]= i+1;
        s_avg[i]= (double)rand() / (double)RAND_MAX * 100.0;
        s_age[i] = rand()%7+18;

    }
    
}

void student_printf(student s){
    printf("ID: %d (kor: %d) - atlag:%.2lf\n", s.id, s.age, s.avg);
}

student* student_init(int id){
    student* s = (student*)malloc(sizeof(student));
    if(s == NULL){
        printf("MALLOC ERROR!\n");
        return NULL;
    }

    (*s).id= id;
    s->avg= (double)rand() / (double)RAND_MAX * 5.0;
    s->age = rand()%7+18;

    return s;
}

void student_free(student* s_array[], int n){
    for (int i = 0; i < n; i++)
    {
        free(s_array[i]);
    }
    
}

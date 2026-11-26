#include <stdlib.h>
#include <stdio.h>

#include "advstud.h"

void as_printf(advstud* s){
    char* degree = "---";
    switch (s->degree)
    {
        case Bsc:
            degree = "Bsc";
            printf("ID: %d (kor: %d)[%s] - atlag:%.2lf\n", s->id, s->age, degree, s->avg);
            printf(" - Kurzusok: %d\n", s->data.courses);
            break;
        case Msc:
            degree = "Msc";
            printf("ID: %d (kor: %d)[%s] - atlag:%.2lf\n", s->id, s->age, degree, s->avg);
            printf(" - Kreditindex: %.1lf\n", s->data.ci);
            break;
        case PhD:
            degree = "PhD";
            printf("ID: %d (kor: %d)[%s] - atlag:%.2lf\n", s->id, s->age, degree, s->avg);
            printf(" - Impakt: %.2lf (erdos: %u)\n", s->data.pub.imp, s->data.pub.erdos);
            break;
    default:
        break;
    }
    
}

advstud* as_init(int id, enum SType _degree){
    advstud* s = (advstud*)malloc(sizeof(advstud));
    if(s == NULL){
        printf("MALLOC ERROR!\n");
        return NULL;
    }

    (*s).id= id;
    s->avg= (double)rand() / (double)RAND_MAX * 5.0;
    s->age = rand()%7+18;
    s->degree = _degree;

    if(_degree == Bsc) s->data.courses = rand()%4+4;
    if(_degree == Msc) s->data.ci = (double)rand() / (double)RAND_MAX*5.0;
    if (_degree == PhD)
    {
        s->data.pub.imp =(double)rand() / (double)RAND_MAX*25.0;
        s->data.pub.erdos = rand()%50+1;
    }
    

    return s;
}

void as_free(advstud* s_array[], int n){
    for (int i = 0; i < n; i++)
    {
        free(s_array[i]);
    }
    
}

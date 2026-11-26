#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "shared.h"
#include "student.h"
#include "advstud.h"

int main (void){
    
    srand(time(NULL));

    // I. Fazis

    int s_id[STUD_CNT];
    double s_avg[STUD_CNT];
    short int s_age[STUD_CNT];
    s_array_init(s_id, s_avg, s_age, STUD_CNT);


    // II. Fazis (struktura)
    struct Student_B simple_DB[STUD_CNT];

    simple_DB[0].id = 1;
    simple_DB[0].avg = 95.7;
    simple_DB[0].age = 19;
    
    struct Student_B stud2;
    stud2.id = 2;
    stud2.avg = 82.5;
    stud2.age = 20;

    simple_DB[1] = stud2;


    struct Student_B stud3 = {71.3, 3, 21};
    simple_DB[2] = stud3;

    student_printf(simple_DB[0]);
    student_printf(simple_DB[1]);
    student_printf(simple_DB[2]);

    simple_DB[0].age = 20;
    simple_DB[1].age = 21;
    simple_DB[2].age = 22;

    student_printf(simple_DB[0]);
    student_printf(simple_DB[1]);
    student_printf(simple_DB[2]);

    // ugyesebben
    student* p_DB[STUD_CNT];
    for (int i = 0; i < STUD_CNT; i++)
    {
        p_DB[i] = student_init(i+1+STUD_CNT);
    }
    for (int i = 0; i < STUD_CNT; i++)
    {
        student_printf(*p_DB[i]);     
    }
    student_free(p_DB, STUD_CNT);


    // III. Fazis

    advstud** heap_DB = (advstud**)malloc(STUD_CNT*sizeof(advstud*));

    if (heap_DB == NULL)
    {   
        printf("MALLOC ERROR!\n");
        return -1;
    }
    for (int i = 0; i < STUD_CNT; i++)
    {
        heap_DB[i] = as_init(i+1+STUD_CNT*2, rand()%3);
    }
    for (int i = 0; i < STUD_CNT; i++)
    {
        as_printf(heap_DB[i]);     
    }
    as_free(heap_DB, STUD_CNT);
    free(heap_DB);
    
    return 0;
}


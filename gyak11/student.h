#ifndef STUDENT_H
#define STUDENT_H
void s_array_init(int s_id[], double s_avg[], short int s_age[], int n);

struct Student_A
{
    int id;
    double avg;
    short int age;
};

struct Student_B // legjobb lehetoseg, paddingek miatt
{
    double avg;
    int id;
    short int age;
};

struct Student_C
{
    double avg;
    short int age;
    int id;
};

typedef struct Student_B student;
void student_printf(student s);
student* student_init(int id);

void student_free(student* s_array[], int n);

#endif

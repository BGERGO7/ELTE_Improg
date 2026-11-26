#ifndef ADVSTUDENT_H
#define ADVSTUDENT_H

enum SType{Bsc, Msc, PhD};

typedef struct AdvStudent // typedef es struct egybe
{
    union Data{
        int courses;
        double ci;
        struct Publication {
            double imp;
            unsigned int erdos;
        } pub; // mezo (data)
    } data; // mezo (AdvStudent)

    double avg;
    int id;
    enum SType degree;
    short int age;
} advstud; // alias!

void as_printf(advstud* s);
advstud* as_init(int id, enum SType _degree);
void as_free(advstud* s_array[], int n);

#endif

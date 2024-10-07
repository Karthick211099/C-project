#include <stdio.h>
#include <string.h>
#include <malloc.h>
typedef struct student
{
    int roll;
    char name[20];
    float percentage;
    struct student *next;
} ST;
void stud_add(ST **);
int stud_count(ST *);
void stud_show(ST *);
void stud_del(ST **, int);
void stud_dele_all(ST **);
void stud_revlist(ST *);
void stud_save(ST *);
void stud_sort(ST **);
void roll(ST **);
void name(ST **);
void percentage(ST **);
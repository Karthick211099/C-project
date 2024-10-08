#include "header.c"
void stud_revlist(ST *ptr)
{
    int i, j, c = stud_count(ptr);
    ST temp;
    ST *p1, *p2;
    p1 = ptr;

    int size = sizeof(ST) - sizeof(ST *);
    for (i = 0; i < c / 2; i++)
    {
        p2 = ptr;
        for (j = 0; j < c - 1 - i; j++)
            p2 = p2->next;

        memcpy(&temp, p1, size);
        memcpy(p1, p2, size);
        memcpy(p2, &temp, size);

        p1 = p1->next;
    }
}
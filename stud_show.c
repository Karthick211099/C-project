#include "header.c"
void stud_show(ST *ptr)
{
    while (ptr != 0)
    {
        printf("%d %s %f\n", ptr->roll, ptr->name, ptr->percentage);
        ptr = ptr->next;
    }
}
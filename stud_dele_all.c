#include "header.c"
void stud_dele_all(ST **ptr)
{
    ST *temp;
    while (*ptr != 0)
    {
        temp = *ptr;
        *ptr = (*ptr)->next;

        free(temp);
    }
}
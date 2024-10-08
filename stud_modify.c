#include "header.c"
void stud_modify(ST *ptr, int oldroll, int newroll)
{
    while (ptr != 0)
    {
        if (ptr->roll == oldroll)
        {
            ptr->roll = newroll;
            break;
        }
        else
        {
            ptr = ptr->next;
        }
    }
}
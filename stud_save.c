#include "header.c"
void stud_save(ST *ptr)
{
    FILE *fp = fopen("Records.txt", "w");
    while (ptr != 0)
    {
        fprintf(fp, "%d %s %f\n", ptr->roll, ptr->name, ptr->percentage);
        ptr = ptr->next;
    }
}
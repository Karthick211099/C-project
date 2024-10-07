#include "header.c"
void stud_add(ST **ptr)
{
    ST *temp = (ST *)malloc(sizeof(ST));
    printf("enter the student details\n");
    scanf("%d %s %f", &temp->roll, temp->name, &temp->percentage);

    if (*ptr == 0)
    {
        temp->next = *ptr;
        *ptr = temp;
    }
    else
    {
        ST *last = *ptr;
        while (last->next != 0)
            last = last->next;

        temp->next = last->next;
        last->next = temp;
    }
}
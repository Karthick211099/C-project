#include "header.c"
void stud_del(ST **ptr, int n)
{
    if (*ptr == 0)
    {
        printf("Empty linked list, nothing to delete\n");
        return;
    }

    ST *temp = *ptr, *prv;
    while (temp != 0)
    {
        if (temp->roll == n)
        {
            if (temp == *ptr)
                *ptr = temp->next;
            else
                prv->next = temp->next;

            free(temp);
            temp = NULL;
            return;
        }
        else
        {
            prv = temp;
            temp = temp->next;
        }
    }
    printf("The data doesn't exist to delete\n");
}
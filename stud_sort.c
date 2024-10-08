#include "header.c"
void stud_sort(ST **ptr)
{
    int op;
    printf("\nselect sorting mode\n1.roll.no\n2.name\n3.percentage\n\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        roll(ptr);
        printf("based on roll.no\n\n");
        break;
    case 2:
        name(ptr);
        printf("based on names\n\n");
        break;
    case 3:
        percentage(ptr);
        printf("based on marks\n\n");
        break;
    }
}
void roll(ST **ptr)
{
    int swapped;
    ST *temp = *ptr;

    if (temp == NULL)
        return;
    do
    {
        swapped = 0;
        while (temp->next != NULL)
        {
            if (temp->roll > temp->next->roll)
            {
                int temp_roll = temp->roll;
                temp->roll = temp->next->roll;
                temp->next->roll = temp_roll;

                swapped = 1;
            }
            else
            {
                temp = temp->next;
            }
        }
        temp = *ptr;
    } while (swapped);
}
void name(ST **ptr)
{
    int swapped;
    ST *temp = *ptr;

    if (temp == NULL)
        return;
    do
    {
        swapped = 0;
        while (temp->next != NULL)
        {
            if (strcmp(temp->name, temp->next->name) > 0)
            {
                char temp_name[100];
                strcpy(temp_name, temp->name);
                strcpy(temp->name, temp->next->name);
                strcpy(temp->next->name, temp_name);

                swapped = 1;
            }
            else
            {
                temp = temp->next;
            }
        }
        temp = *ptr;
    } while (swapped);
}
void percentage(ST **ptr)
{
    int swapped;
    ST *temp = *ptr;

    if (temp == NULL)
        return;
    do
    {
        swapped = 0;
        while (temp->next != NULL)
        {
            if (temp->percentage > temp->next->percentage)
            {
                float temp_percentage = temp->percentage;
                temp->percentage = temp->next->percentage;
                temp->next->percentage = temp_percentage;

                swapped = 1;
            }
            else
            {
                temp = temp->next;
            }
        }
        temp = *ptr;
    } while (swapped);
}
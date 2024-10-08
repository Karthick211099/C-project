#include "header.c"
int main()
{
    printf("*---------------------------------------*\n");
    printf("|    ******STUDENT RECORD MENU******    |\n");
    printf("|       a/A : add NEW Record            |\n");
    printf("|       d/D : delete a Record           |\n");
    printf("|       s/S : show the list             |\n");
    printf("|       m/M : modify a record           |\n");
    printf("|       v/V : save                      |\n");
    printf("|       e/E : exit                      |\n");
    printf("|       t/T : sort the list             |\n");
    printf("|       l/L : delete all the records    |\n");
    printf("|       r/R : reverse the list          |\n");
    printf("|_______________________________________|\n");

    printf("\n********Enter the your choice**********\n");

    ST *hptr = 0;
    char op;
    do
    {
        printf("Enter your option\n");
        scanf(" %c", &op);
        switch (op)
        {
        case 'A':
            stud_add(&hptr);
            break;
        case 'S':
            printf("Display the student record\n");
            stud_show(hptr);
            break;
        case 'V':
            char op1;
            printf("Do you want to save record or not\n");
            scanf(" %c", &op1);
            if (op1 == 'y')
            {
                printf("Saved student record successfully\n");
                stud_save(hptr);
            }
            else
            {
                return 0;
            }
            break;
        case 'D':
            printf("Delete the particular student record based on requirement\n");
            int roll;
            printf("Enter the roll number\n");
            scanf("%d", &roll);
            stud_del(&hptr, roll);
            break;
        case 'L':
            printf("Delete the student record\n");
            stud_dele_all(&hptr);
            break;
        case 'R':
            printf("Reverse the student record\n");
            stud_revlist(hptr);
            stud_show(hptr);
            break;
        case 'M':
            printf("modify the data\n");
            int oldroll, newroll;
            printf("enter the old and updated roll number\n");
            scanf("%d %d", &oldroll, &newroll);
            stud_modify(hptr, oldroll, newroll);
            stud_show(hptr);
            break;
        case 'C':
            printf("Total student strength\n");
            int c = stud_count(hptr);
            printf("Total : %d\n", c);
            break;
        case 'T':
            int c1 = stud_count(hptr);
            printf("sorting student record\n");
            stud_sort(&hptr);
            stud_show(hptr);
            break;
        }
        printf("Do you want to add another student details yes/no:\n");
        scanf(" %c", &op);
    } while ((op == 'y') || (op == 'Y'));

    printf("Total student strength\n");
    int c = stud_count(hptr);
    printf("Total : %d\n", c);
}
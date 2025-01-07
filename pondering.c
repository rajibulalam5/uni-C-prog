#include <stdio.h>
int main()
{
    int marks;
    printf("ENTER YOUR MARKS: ");
    scanf("%d",&marks);
    switch(marks/10)
    {
    case 10:
    case 9:
    case 8:
        printf("\n\nYour grade is: A+");
        break;
    case 7:
        if(marks>=75)
            printf("\n\nYour grade is: A");
        else
            printf("\n\nYour grade is: A-");
        break;
    case 6:
        if(marks>=65)
            printf("\n\nYour grade is: B");
        else
            printf("\n\nYour grade is: C");
        break;
    case 5:
        printf("\n\nYour grade is: D");
        break;
    case 4:
        printf("\n\nYour grade is: E");
        break;
    case 3:
    case 2:
    case 1:
    case 0:

        printf("\n\nYour grade is: F");
        break;
    default:
        printf("\n\nInvalid Input, USE NUMBERS BETWEEN 1 TO 100");
    }
    getch();
}
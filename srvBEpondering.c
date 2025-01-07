#include<stdio.h>
int main()
{
    int m,n,X;
    printf("Multiplication Table:  \n\n");
    for(int m=1;m<=10;m++)
    {
        for(int n=1;n<=10;n++)
        {
            int X=m*n;
            printf("%6d",X);
            if(n==10)
            {
                printf("\n");
            }
        }
    }
    getch();
}

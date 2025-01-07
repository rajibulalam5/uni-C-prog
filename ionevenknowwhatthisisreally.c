#include<stdio.h>
int main()
{
    printf("Multipication Table: \n\n");
    for (int i=1; i<=10; i++)
    {
        for(int a=1; a<=10; a++)
        {
            int X =i*a;
            printf("%4d",X);
            if(a==10)
            {
                printf("\n");
            }
        }

    }
    return 0;

}


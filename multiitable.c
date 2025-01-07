#include<stdio.h>
int main()
{
    int m,n;
    for(m=1; m<=10; m++)
    {
        for(n=1; n<=10; n++)
        {
            printf("%d*%d =%4d  ",m,n,m*n);
        }
        printf("\n\n");
    }
    return 0;
}

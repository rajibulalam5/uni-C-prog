#include<stdio.h>
int main ()
{
    int i,j,t,arr[50];
    for(i=0;i<5;i++)
    {scanf("%d",&arr[i]);}
    for(i=0;i<5;i++)
    {for(j=0;j<(5-i-1);j++)
    {if(arr[j]>arr[j+1])
    {
        t=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=t;

    }}}
    for(i=0;i<5;i++)
    {printf("%3d",arr[i]);}
    return 0;
}
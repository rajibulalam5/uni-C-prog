#include<stdio.h>
int main (){
int a,b,c;
printf("Enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("the maximum is : %d",a);
else if (b>c)
printf("the maximum is : %d",b);
else 
printf("the maximum is : %d",c);
    return 0;
}
#include<stdio.h>
int main()
{
char c;
printf("enter the character: ");
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
printf("is alphabet");
else if(c>='0'&&c<='9')
printf("is digit");
else
printf("is special character");
    return 0;
}
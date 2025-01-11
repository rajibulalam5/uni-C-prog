#include<stdio.h>
int main(){
char c;
printf("enter the character: ");
scanf("%c",&c);
if(c>='a'&&c<='z')
printf("is lowercase");

else if(c>='A'&&c<='Z')
printf("is uppercase");

else 
printf("is not alphabret");
    return 0;
}
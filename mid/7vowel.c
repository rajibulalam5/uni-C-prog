#include<stdio.h>
int main()
{
char c;
printf("enter the character:");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
printf("the character is vowel");
else if (c>='a'&&c<='z'||c>='A'&&c<='Z')
printf("the character is consonant");
else
printf("the character is not alphabt");
    return 0;
}
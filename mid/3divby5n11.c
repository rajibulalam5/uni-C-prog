#include<stdio.h>
int main(){
int x;
printf("enter the number: ");
scanf("%d",&x);
if (x%5==0){
printf("the number is divisable by 5\n");
}else{
printf("the number is not divisable by 5\n");}
if(x%11==0){
printf("the number is divisable by 11\n");
}else{
printf("the number is not divisable by 11\n");}
    return 0;
}
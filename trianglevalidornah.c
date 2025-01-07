// Write a C program to input a triangle's angles and check whether the triangle is valid or not.



#include <stdio.h>


int main(){

int a, b, c ;


printf("Enter the first angle:\n");
scanf("%d",&a);

printf("Enter the second angle:\n");
scanf("%d",&b);

printf("Enter the third angle:\n");
scanf("%d",&c);


if( a > 0 && b > 0 && c > 0){

    if(a + b + c == 180){
        printf("The triangle is valid.\n");
    }
    else{
        printf("The triangle is not valid.\n");
    }
}else{
    printf("Invalid angles. Please enter positive integers.\n");
}

}
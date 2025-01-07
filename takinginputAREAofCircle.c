#include<stdio.h>
int main(){
    float radius;
    printf("ENTER THE RADIUS OF THE CIRCLE: ");
    scanf("%f",&radius);
    float pi = 3.1416;
    float area = pi*radius*radius;
    printf("\n\nTHE AREA OF THE CIRCLE IS: %.2f",area);


    return 0;
}
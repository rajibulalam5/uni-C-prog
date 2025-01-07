#include <stdio.h>

int main() {
    float marks;

    printf("enter your marks: ");
    scanf("%f", &marks);

    int grade = (int)marks / 10;

    switch (grade) {
        case 10:
        case 9:
        case 8:
            printf("Grade: A+\n");
            break;
        case 7:
            printf("Grade: A\n");
            break;
        case 6:
            printf("Grade: A-\n");
            break;
        case 5:
            printf("Grade: B+\n");
            break;
        case 4:
            printf("Grade: B\n");
            break;
        default:
            if (marks >= 0 && marks < 40) {
                printf("Grade: F\n");
            } else {
                printf("Invalid marks entered!\n");
            }
            break;
    }

    return 0;
}

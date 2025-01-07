#include <stdio.h>

int main() {
    int amount;
    int count;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    if (amount <= 0) {
        printf("Invalid amount. Please enter a value greater than 0.\n");
    }

    printf("notes:\n");

    if (amount >= 1000) {
        count = amount / 1000;
        amount %= 1000;
        printf("1000 x %d\n", count);
    }
    if (amount >= 500) {
        count = amount / 500;
        amount %= 500;
        printf("500 x %d\n", count);
    }
    if (amount >= 200) {
        count = amount / 200;
        amount %= 200;
        printf("200 x %d\n", count);
    }
    if (amount >= 100) {
        count = amount / 100;
        amount %= 100;
        printf("100 x %d\n", count);
    }
    if (amount >= 50) {
        count = amount / 50;
        amount %= 50;
        printf("50 x %d\n", count);
    }
    if (amount >= 20) {
        count = amount / 20;
        amount %= 20;
        printf("20 x %d\n", count);
    }
    if (amount >= 10) {
        count = amount / 10;
        amount %= 10;
        printf("10 x %d\n", count);
    }
    if (amount >= 5) {
        count = amount / 5;
        amount %= 5;
        printf("5 x %d\n", count);
    }
    if (amount >= 2) {
        count = amount / 2;
        amount %= 2;
        printf("2 x %d\n", count);
    }
    if (amount >= 1) {
        count = amount;
        printf("1 x %d\n", count);
    }

    return 0;
}


#include <stdio.h>

int main() {
    int amount, notes100, notes50, notes20, notes10, notes5, notes2, notes1;

    // Input the total amount from the user
    printf("Enter the total amount: ");
    scanf("%d", &amount);

    // Calculate the number of notes for each denomination
    notes100 = amount / 100;
    amount %= 100;

    notes50 = amount / 50;
    amount %= 50;

    notes20 = amount / 20;
    amount %= 20;

    notes10 = amount / 10;
    amount %= 10;

    notes5 = amount / 5;
    amount %= 5;

    notes2 = amount / 2;
    amount %= 2;

    notes1 = amount;

    // Display the result
    printf("Number of 100 notes: %d\n", notes100);
    printf("Number of 50 notes: %d\n", notes50);
    printf("Number of 20 notes: %d\n", notes20);
    printf("Number of 10 notes: %d\n", notes10);
    printf("Number of 5 notes: %d\n", notes5);
    printf("Number of 2 notes: %d\n", notes2);
    printf("Number of 1 notes: %d\n", notes1);

    return 0;
}

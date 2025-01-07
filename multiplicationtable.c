#include <stdio.h>

int main() {
    int c = 2;

    while (c <= 10) { 
        int r = 1;

        while (r <= 10) {
            printf("%d X %d = %d\n", c, r, c * r);
            r++;
        }

        printf("\n");
        c++;
    }

    return 0;
}

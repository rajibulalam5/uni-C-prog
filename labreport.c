#include <stdio.h>

int main() {
    int i, j, k;
    int arr[3][3];
    int brr[3][3];
    int res[3][3];

    // Input for Matrix A
    printf("Enter elements of 1st 3x3 array (Matrix A): \n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Display Matrix A
    printf("1st array (Matrix A): \n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    // Input for Matrix B
    printf("Enter elements of 2nd 3x3 array (Matrix B): \n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &brr[i][j]);
        }
    }

    // Display Matrix B
    printf("2nd array (Matrix B): \n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%3d ", brr[i][j]);
        }
        printf("\n");
    }

    // Matrix multiplication
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            res[i][j] = 0;
            for(k = 0; k < 3; k++) {
                res[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }

    // Display the result of Matrix multiplication
    printf("result(Matrix A * Matrix B): \n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%3d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int a[2][2], b[2][2], result[2][2], i, j;

    // Taking input for the first matrix
    printf("Enter elements of 1st matrix:\n");
    for(i = 0; i < 2; ++i)
        for(j = 0; j < 2; ++j) {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    // Taking input for the second matrix
    printf("Enter elements of 2nd matrix:\n");
    for(i = 0; i < 2; ++i)
        for(j = 0; j < 2; ++j) {
            printf("Enter b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

    // Adding the two matrices
    for(i = 0; i < 2; ++i)
        for(j = 0; j < 2; ++j)
            result[i][j] = a[i][j] + b[i][j];

    // Displaying the result
    printf("\nSum of two matrices: \n");
    for(i = 0; i < 2; ++i)
        for(j = 0; j < 2; ++j) {
            printf("%d  ", result[i][j]);
            if(j == 1)
                printf("\n");
        }

    return 0;
}

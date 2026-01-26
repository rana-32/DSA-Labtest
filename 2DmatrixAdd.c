#include <stdio.h>

int main() {
    int r, c;
    scanf("%d%d",&r,&c);
    int A[r][c], B[r][c], Sum[r][c];


    // Input first matrix

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Sum of matrices
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Output result
    printf("Sum of two matrices:\n");


    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}


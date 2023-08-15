#include <stdio.h>

int main() {
    int a[3][3], b[3][3], multi[3][3];

    printf("Enter matrix a: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter matrix b: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Matrix a:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix b:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("\nThe multiplication is: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            multi[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                multi[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", multi[i][j]);
        }
        printf("\n");
    }

    return 0;
}
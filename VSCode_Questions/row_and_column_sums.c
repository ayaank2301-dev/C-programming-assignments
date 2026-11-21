#include <stdio.h>
int main() {
    int r, c;
    int mat[100][100];

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        int rowSum = 0;
        for (int j = 0; j < c; j++) {
            rowSum += mat[i][j];
        }
        printf("%d", rowSum);
        if (i < r - 1) {
            printf(" ");
        }
    }
    printf("\n");

    for (int j = 0; j < c; j++) {
        int colSum = 0;
        for (int i = 0; i < r; i++) {
            colSum += mat[i][j];
        }
        printf("%d", colSum);
        if (j < c - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

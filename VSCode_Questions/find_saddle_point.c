#include <stdio.h>
#define MAX 100
int main() {
    int r, c;
    int mat[MAX][MAX];

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int isRowMin = 1;
            int isColMax = 1;

            for (int k = 0; k < c; k++) {
                if (mat[i][k] < mat[i][j]) {
                    isRowMin = 0;
                    break;
                }
            }

            for (int k = 0; k < r; k++) {
                if (mat[k][j] > mat[i][j]) {
                    isColMax = 0;
                    break;
                }
            }

            if (isRowMin == 1 && isColMax == 1) {
                printf("%d %d %d\n", i, j, mat[i][j]);
                return 0;
            }
        }
    }

    printf("None\n");
    return 0;
}

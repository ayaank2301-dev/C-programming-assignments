#include <stdio.h>
#define MAX 100
int main() {
    int r, c;
    int mat[MAX][MAX];
    int peaks = 0;

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int isPeak = 1;

            if (i > 0 && mat[i - 1][j] >= mat[i][j]) {
                isPeak = 0;
            }
            if (i < r - 1 && mat[i + 1][j] >= mat[i][j]) {
                isPeak = 0;
            }
            if (j > 0 && mat[i][j - 1] >= mat[i][j]) {
                isPeak = 0;
            }
            if (j < c - 1 && mat[i][j + 1] >= mat[i][j]) {
                isPeak = 0;
            }

            if (isPeak == 1) {
                peaks++;
            }
        }
    }

    printf("%d\n", peaks);
    return 0;
}

#include <stdio.h>
int main() {
    int n;
    int mat[100][100];
    int isSymmetric = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (isSymmetric == 0) {
            break;
        }
    }

    if (isSymmetric == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

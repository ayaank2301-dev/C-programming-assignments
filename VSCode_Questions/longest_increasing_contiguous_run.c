#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        if (n <= 0) {
            printf("0\n");
            return 0;
        }
        long long prev, curr;
        scanf("%lld", &prev);
        int currentRun = 1;
        int maxRun = 1;
        for (int i = 1; i < n; i++) {
            scanf("%lld", &curr);
            if (curr > prev) {
                currentRun++;
                if (currentRun > maxRun) {
                    maxRun = currentRun;
                }
            } else {
                currentRun = 1;
            }
            prev = curr;
        }
        printf("%d\n", maxRun);
    }
    return 0;
}

#include <stdio.h>
int digitSum(long long x) {
    if (x < 0) {
        x = -x;
    }
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int sums[10000];
        for (int i = 0; i < n; i++) {
            long long val;
            scanf("%lld", &val);
            sums[i] = digitSum(val);
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (sums[i] == sums[j]) {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}

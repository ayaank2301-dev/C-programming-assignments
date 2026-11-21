#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    if (scanf("%d", &n) == 1 && n >= 2) {
        long long arr[1000];
        for (int i = 0; i < n; i++) {
            scanf("%lld", &arr[i]);
        }
        long long minDiff = llabs(arr[1] - arr[0]);
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                long long diff = llabs(arr[i] - arr[j]);
                if (diff < minDiff) {
                    minDiff = diff;
                }
            }
        }
        printf("%lld\n", minDiff);
    }
    return 0;
}

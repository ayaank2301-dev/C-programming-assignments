#include <stdio.h>
void convertSeconds(long long totalSeconds) {
    long long hours = totalSeconds / 3600;
    long long minutes = (totalSeconds % 3600) / 60;
    long long seconds = totalSeconds % 60;
    printf("%lld %lld %lld\n", hours, minutes, seconds);
}
int main() {
    long long totalSeconds;
    if (scanf("%lld", &totalSeconds) == 1) {
        convertSeconds(totalSeconds);
    }
    return 0;
}

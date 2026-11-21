#include <stdio.h>
#include <string.h>

int main() {
    char str[1005];
    if (scanf("%1000s", str) == 1) {
        int len = strlen(str);
        if (len > 0) {
            int count = 1;
            for (int i = 1; i <= len; i++) {
                if (str[i] == str[i - 1]) {
                    count++;
                } else {
                    printf("%c%d", str[i - 1], count);
                    count = 1;
                }
            }
            printf("\n");
        }
    }
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int f[50];
    f[1] = 1;
    f[2] = 1;

    int count1 = 0;

    for (int i = 3; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    count1 = f[n];

    int dp[50];
    dp[1] = 1;
    dp[2] = 1;

    int count2 = 0;
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
        count2++;
    }

    printf("%d %d\n", count1, count2);
    return 0;
}

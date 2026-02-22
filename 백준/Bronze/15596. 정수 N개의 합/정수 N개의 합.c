#include <stdio.h>

long long sum(int *arr, int n) {
    long long result = 0;
    for (int i = 0; i < n; i++) {
        result += arr[i];
    }
    return result;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	int arr[101] = { 0 };
	for (int i = 1; i < 101; i++) {
		arr[i] = i;
	}
	
	int a, b;
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);

		int temp = 0;
		temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}

	for (int i = 1; i <= n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
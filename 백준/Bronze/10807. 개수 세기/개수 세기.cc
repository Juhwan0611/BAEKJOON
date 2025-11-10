#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n;
	scanf("%d", &n);

	int arr[101] = { 0 };

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int v;
	scanf("%d", &v);

	int count = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] == v) count++;
	}

	printf("%d\n", count);

	return 0;
}
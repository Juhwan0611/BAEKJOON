#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int *arr = (int*)malloc(sizeof(int) * n);
	int max = -1e9, min = 1e9;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}
	
	printf("%d", max * min);
	
	free(arr);
	return 0;
}
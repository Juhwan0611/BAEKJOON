#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int max = -10000001;
	int n;
	
	int count = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &n);
		if (n > max) {
			max = n;
			count = i + 1;
		}
	}

	printf("%d\n%d\n", max, count);

	return 0;
}
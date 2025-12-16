#include <stdio.h>

int main() {
	int max = 0;
	int cnt = 0;
	for (int i = 0; i < 9; i++) {
		int n;
		scanf("%d", &n);
		if (max < n) {
			max = n;
			cnt = i + 1;
		}
	}
	
	printf("%d\n%d\n", max, cnt);
	
	return 0;
}
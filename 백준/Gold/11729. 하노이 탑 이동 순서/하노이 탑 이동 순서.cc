#include <stdio.h>

void hanoi(int n, int start, int end, int other) {
	if (n == 1) {
		printf("%d %d\n", start, end);
		return ;
	}
	
	hanoi(n - 1, start, other, end);
	printf("%d %d\n", start, end);
	hanoi(n - 1, other, end, start);	
}


int main() {
	int n;
	scanf("%d", &n);

	// 반복횟수 
	int count = 1;
	for (int i = 0; i < n; i++) {
		count *= 2;
	}
	
	printf("%d\n", count - 1);
	
	hanoi(n, 1, 3, 2);

	return 0;
}
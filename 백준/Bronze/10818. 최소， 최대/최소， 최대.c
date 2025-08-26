#include <stdio.h>
int main() {
	
	int n; // 반복 횟수 변수 
	int a; // 각각의 수를 받기위할 변수 
	scanf("%d", &n);
	
	int min = 1000000, max = -1000000; 
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		if (max < a) max = a;
		if (min > a) min = a;
	}
	
	printf("%d %d", min, max);
	
	return 0;
}
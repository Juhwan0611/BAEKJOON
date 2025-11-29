#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	
	printf("int a;\n");
	printf("int *ptr = &a;\n");
	for (int i = 2; i <= n; i++) {
		printf("int ");
		
		for (int k = 0; k < i; k++) {
			printf("*");
		}
		
		printf("ptr%d = &ptr", i);
		if (i - 1 > 1) {
			printf("%d", i - 1);
		}
		printf(";\n");
	}
	
	return 0;
}
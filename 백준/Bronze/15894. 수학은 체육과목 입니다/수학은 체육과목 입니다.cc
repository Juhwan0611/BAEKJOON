#include <stdio.h>

int main() {
	long long n;
	scanf("%lld", &n);
	
	printf("%lld", (n * 3 + 1) + (n - 1));
	
	return 0;
}
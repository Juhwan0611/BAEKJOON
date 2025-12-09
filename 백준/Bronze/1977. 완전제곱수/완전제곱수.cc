#include <stdio.h>

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	
	int sum = 0, min = 100000001;
	
	for (int i = 1; i * i <= n; i++) {
		if (i * i >= m) {
			sum += i * i;
			
			if (i * i < min) {
				min = i * i;
			}
		}
	}
	
	if (sum == 0) printf("-1");
	else printf("%d\n%d\n", sum, min);
	
	return 0;
}
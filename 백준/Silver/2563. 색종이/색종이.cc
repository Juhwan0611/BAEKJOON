#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int paper[101][101] = { 0 }; //도화지 
	
	for (int i = 0; i < n; i++) {
		int a, b; 
		scanf("%d %d", &a, &b);
		
		for (int k = a; k < a + 10; k++) {
			for (int j = b; j < b + 10; j++) {
				paper[k][j] = 1;
			}
		}
	}
	
	int area_count = 0;
	for (int i = 0; i <= 100; i++) {
		for (int k = 0; k <= 100; k++) {
			if (paper[i][k] == 1) {
				area_count++;
			}
		}
	}	
	
	printf("%d", area_count);
	
	return 0;
}
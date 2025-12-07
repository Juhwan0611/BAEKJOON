#include <stdio.h>

char arr[2200][2200];

void star(int x, int y, int n) {
	if (n == 1) {
		arr[x][y] = '*';
		return;
	}
	
	int next = n / 3;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			
			if (i == 1 && j == 1) {
				continue;
			}
			
			star(x + i * next, y + j * next, next);
		}
	}
}


int main() {
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = ' ';
		}
	}
	
	star(0, 0, n);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
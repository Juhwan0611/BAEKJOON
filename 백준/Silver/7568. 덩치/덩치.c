#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x;
	int y;
} Body;

int main() {
	int n;
	scanf("%d", &n);
	
	Body arr[51];
	
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &arr[i].x, &arr[i].y);
	}
	
	for (int i = 0; i < n; i++) {
		int rank = 1;
		for (int j = 0; j < n; j++) {
			if (arr[i].x < arr[j].x && arr[i].y < arr[j].y) {
				rank++;
			}
		}
		printf("%d ", rank);
	}
	
	return 0;
}
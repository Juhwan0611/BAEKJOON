#include <stdio.h>

char arr[600000];
	
void solve(int start, int len) {
	if (len == 1) return;
	
	int third = len / 3;
	
	for (int i = start + third; i < start + 2 * third; i++) {
		arr[i] = ' ';
	}
	
	solve(start, third);
	solve(start + 2 * third, third);
}


int main() {
	int n;

	while (scanf("%d", &n) == 1) {
		int len = 1;
		for (int i = 0; i < n; i++) len *= 3;
	
		for (int i = 0; i < len; i++) arr[i] = '-';
	
		solve(0, len);
		
		for (int i = 0; i < len; i++) printf("%c", arr[i]);
		printf("\n");
	}

	return 0;
} 
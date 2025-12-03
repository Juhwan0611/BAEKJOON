#include <stdio.h>

int main() {
	char s[5][16] = { 0 };
	for (int i = 0; i < 5; i++) {
		scanf("%s", s[i]);
	}
	
	for (int i = 0; i < 15; i++) { //열 먼저 
		for (int k = 0; k < 5; k++) { //행 다음 
			if (s[k][i] != '\0') {
				printf("%c", s[k][i]);
			}
		} 
	}
	
	return 0;
}
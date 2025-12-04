#include <stdio.h>
#include <string.h>


int main() {
	char n[10];
	char temp;
	
	scanf("%s", n);
	
	for (int i = 0; i < strlen(n); i++) {
		for (int j = 0; j < strlen(n); j++) {
			if (n[j] < n[j + 1]) {
				temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
			}
		}
	}
	
	printf("%s", n);
	
	return 0;
}

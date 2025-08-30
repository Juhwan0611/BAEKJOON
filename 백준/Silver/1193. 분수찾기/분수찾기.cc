#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	
	int de = 1;
	while (n > de) {
		n -= de;
		de += 1;
	}
	
	int a = 0;
	int b = 0;
	if (de % 2 == 0) {
		a = n;
		b = de - n + 1;
	}
	else {
		b = n;
		a = de - n + 1;
	}
	
	printf("%d/%d", a, b);
	
	
	return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
	char s[1001];
	char s1[1001];
	
	scanf("%s", &s);
	scanf("%s", &s1);
	
	if (strlen(s) < strlen(s1)) printf("no");
	else printf("go");
	
	
	return 0;
}
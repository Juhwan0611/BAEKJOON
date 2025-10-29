#include <stdio.h>

int main() {
	
	long long a, b, v;
	scanf("%lld %lld %lld", &a, &b, &v);

	long long day = (v - a) / (a - b) + 1;
	if ((v - a) % (a - b) != 0)
		day++;
		
	printf("%lld\n", day);
	
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char s[51];
	double n;
	char d[3]; //등급

	double hac_sum = 0.0; //학점의 총합
	double sum_a = 0.0;

	for (int i = 0; i < 20; i++) {
		scanf("%s %lf %s", &s, &n, &d);
		
		if (strcmp(d, "P") == 0) continue;
		hac_sum += n;

		if (strcmp(d, "A+") == 0) sum_a += (n * 4.5);
		else if (strcmp(d, "A0") == 0) sum_a += (n * 4.0);
		else if (strcmp(d, "B+") == 0) sum_a += (n * 3.5);
		else if (strcmp(d, "B0") == 0) sum_a += (n * 3.0);
		else if (strcmp(d, "C+") == 0) sum_a += (n * 2.5);
		else if (strcmp(d, "C0") == 0) sum_a += (n * 2.0);
		else if (strcmp(d, "D+") == 0) sum_a += (n * 1.5);
		else if (strcmp(d, "D0") == 0) sum_a += (n * 1.0);
		if (strcmp(d, "F") == 0) sum_a += (n * 0.0);
	}

	printf("%lf", sum_a / hac_sum);

	return 0;
}
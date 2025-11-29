#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
	int age;
	char name[101];
	int order;
};

int cmp(const void *a, const void *b) {
	struct person *p1 = (struct person*)a;
	struct person *p2 = (struct person*)b;

	if (p1->age != p2->age)
		return p1->age - p2->age;

	return p1->order - p2->order;

}

int main() {
	int n;
	scanf("%d", &n);

	struct person arr[100001];
	
	for (int i = 0; i < n; i++) {
		scanf("%d %s", &arr[i].age, &arr[i].name);
		arr[i].order = i;
	}

	qsort(arr, n, sizeof(struct person), cmp);
	
	for (int i = 0; i < n; i++) {
		printf("%d %s\n", arr[i].age, arr[i].name);
	}

	
	return 0;
} 
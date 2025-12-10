#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a;

typedef struct check{
	int x, y;
}check;

void sort(int left, int right, check *c) {
	int mid = (left + right) / 2;
	if (left == right) return;

	check *temp = (check*)malloc(sizeof(check) * (right - left + 1));
	int x = left;
	int y = mid + 1;

	sort(x, mid, c);
	sort(y, right, c);

	int k = 0;
	while (x <= mid && y <= right) {
		if (c[x].x > c[y].x) {
			temp[k] = c[y];
			k++;
			y++;
		}
		else if (c[x].x == c[y].x) {
			if (c[x].y > c[y].y) {
				temp[k] = c[y];
				k++;
				y++;
			}
			else {
				temp[k] = c[x];
				k++;
				x++;
			}
		}
		else {
			temp[k] = c[x];
			k++;
			x++;
		}
	}

	while (x <= mid) {
		temp[k] = c[x];
		k++;
		x++;
	}

	while (y <= right) {
		temp[k] = c[y];
		k++;
		y++;
	}

	int i = 0;
	for (int j = left; j <= right; j++) {
		c[j] = temp[i];
		i++;
	}
	
	free(temp);

}
int main() {
	scanf("%d",&a);

	check *c = (check*)malloc(sizeof(check) * a);

	for (int i = 0; i < a; i++) {
		scanf("%d %d",&c[i].x,&c[i].y);
	}
	sort(0, a - 1, c);

	for (int i = 0; i < a; i++) {
		printf("%d %d\n",c[i].x,c[i].y);
	}
	
	free(c);
	
	return 0;
}

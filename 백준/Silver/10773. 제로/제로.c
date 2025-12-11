#include<stdio.h>
#define MAX 100000

int stack[MAX];
int top = -1;

void push(int num) {
	if (top >= MAX - 1) return;
	stack[++top] = num;
}

void pop() {
	if (top < 0) return;
	stack[top--] = 0;
}

int main() {
	int k;
	scanf("%d", &k);
	
	int num;
	while (k--) {
		scanf("%d", &num);
		if (num == 0) pop();
		else push(num);
	}
	
	int sum = 0;
	for (int i = 0; i <= top; i++) {
		sum += stack[i];
	}
	
	printf("%d", sum);
	
	return 0;
}
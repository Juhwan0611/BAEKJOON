#include <bits/stdc++.h>
using namespace std;

struct Node {
	char left;
	char right;
};

struct Node tree[26];


void preorder(char node) {
	if (node == '.') return;
	
	printf("%c", node);
	preorder(tree[node - 'A'].left);
	preorder(tree[node - 'A'].right);
}


void inorder(char node) {
	if (node == '.') return;
	
	inorder(tree[node - 'A'].left);
	printf("%c", node);
	inorder(tree[node - 'A'].right);
}


void postorder(char node) {
	if (node == '.') return;
	
	postorder(tree[node - 'A'].left);
	postorder(tree[node - 'A'].right);
	printf("%c", node);
}


int main() {
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		char node, left, right;
		scanf(" %c %c %c", &node, &left, &right);
		tree[node - 'A'].left = left;
		tree[node - 'A'].right = right;
	}
	
	preorder('A');
	printf("\n");
	inorder('A');
	printf("\n");
	postorder('A');
	
	
	return 0;
} 
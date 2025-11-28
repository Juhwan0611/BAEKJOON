#include <bits/stdc++.h>
using namespace std;

char leftchild[26];
char rightchild[26];

//전위순회 
void preorder(char node) {
	if (node == '.') return;
	printf("%c", node);
	preorder(leftchild[node - 'A']);
	preorder(rightchild[node - 'A']);
}

//중위순회 
void inorder(char node) {
	if (node == '.') return;
	inorder(leftchild[node - 'A']);
	printf("%c", node);
	inorder(rightchild[node - 'A']);
}

//후위순회
void postorder(char node) {
	if (node == '.') return;
	postorder(leftchild[node - 'A']);
	postorder(rightchild[node - 'A']);
	printf("%c", node);
} 


int main() {
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		char root, left, right;
		scanf(" %c %c %c", &root, &left, &right);
		leftchild[root - 'A'] = left;
		rightchild[root - 'A'] = right;
	}
	
	preorder('A');
	printf("\n");	
	inorder('A');
	printf("\n");
	postorder('A');
	
	return 0;
}
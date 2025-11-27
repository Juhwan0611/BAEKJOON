#include <bits/stdc++.h>

using namespace std;

long long arr[1000001];
long long tree[4000004];


long long node_tree(long long node, long long left, long long right) {
	if (left == right) return tree[node] = arr[left];	
	
	long long mid = (left + right) / 2;
	
	return tree[node] = node_tree(node * 2, left, mid) + node_tree(node * 2 + 1, mid + 1, right);
}


void update(long long node, long long left, long long right, const long long& idx, const long long& newvalue) {
	if (left == right) {
		tree[node] = newvalue;
		return;
	}
	
	long long mid = (left + right) / 2;
	
	if (left <= idx && idx <= mid) update(node * 2, left, mid, idx, newvalue);
	else update(node * 2 + 1, mid + 1, right, idx, newvalue);
		
	tree[node] = tree[node * 2] + tree[node * 2 + 1];
	return;
}

//구간 합
long long sum(long long node, long long left, long long right, const long long& b, const long long& c) {
	if (c < left || right < b) return 0; // 구하려는 것과 전혀 무관하다면 
	
	if (b <= left && right <= c) {
		return tree[node];
	} //다 저장 되어있으니 재귀 할 필요 없다. 
	
	long long mid = (left + right) / 2;
	
	return sum(node * 2, left, mid, b, c) + sum (node * 2 + 1, mid + 1, right, b, c); 
} 


int main() {
	long long n, m, k;
	scanf("%lld %lld %lld", &n, &m, &k);
	
	for (int i = 0; i < n; i++) {
		scanf("%lld", &arr[i]);
	}
	
	node_tree(1, 0, n - 1);
	
	
	for (int i = 0; i < m + k; i++) {
		long long a, b, c;
		scanf("%lld %lld %lld", &a, &b, &c);
		if (a == 1) {
			update(1, 0, n - 1, b - 1, c);
		}
		else {
			printf("%lld\n", sum(1, 0, n - 1, b - 1, c - 1));
		}
	}
	
	return 0;
} 
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	
	vector<int> arr(100000, 0);
	vector<int> sum(100000, 0);
	
	for (int i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
		sum[i] = sum[i - 1] + arr[i];
	}
	
	while (m--) {
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", sum[b] - sum[a - 1]); 
	}
	
	return 0;
}
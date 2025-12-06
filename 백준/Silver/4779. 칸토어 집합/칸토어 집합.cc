#include <bits/stdc++.h>
using namespace std;

vector<char> arr;
	
void solve(int start, int len) {
	if (len == 1) return;
	
	int third = len / 3;
	
	for (int i = start + third; i < start + 2 * third; i++) {
		arr[i] = ' ';
	}
	
	solve(start, third);
	solve(start + 2 * third, third);
}


int main() {
	int n;

	while (cin >> n) {
		int len = 1;
		for (int i = 0; i < n; i++) len *= 3;
	
		arr.assign(len, '-');
		
		solve(0, len);
		
		for (int i = 0; i < len; i++) cout << arr[i];
		cout << "\n";
	}

	return 0;
} 
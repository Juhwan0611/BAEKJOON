#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int max_bar = v[n - 1];
	int count = 1; //맨 오른쪽 막대기는 무조건 보임
	for (int i = n - 2; i >= 0; i--) {
		if (v[i] > max_bar) {
			count++;
			max_bar = v[i];
		}
	}

	cout << count << "\n";

	return 0;
}
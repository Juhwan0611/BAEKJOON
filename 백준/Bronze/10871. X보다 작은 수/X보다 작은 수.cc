#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	
	vector<int> nums;
	
	for (int i = 0; i < n; i++) {
		int n;
		cin >> n;
		if (n < x) nums.push_back(n);
	}

	for (int s : nums) {
		cout << s << " ";
	}

	return 0;
}
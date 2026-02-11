#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v;

	for (int i = 0; i < 9; i++) {
		int num;
		cin >> num;

		v.push_back(num);
	}

	int sum = accumulate(v.begin(), v.end(), 0);

	cout << n - sum << "\n";

	return 0;
}
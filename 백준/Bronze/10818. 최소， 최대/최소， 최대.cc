//10818

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	int max = -1e9, min = 1e9;

	vector<int> nums;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		nums.push_back(num);
	}

	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] > max) max = nums[i];
		if (nums[i] < min) min = nums[i];
	}

	cout << min << " " << max << endl;

	return 0;
}
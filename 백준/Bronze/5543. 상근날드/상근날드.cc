#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int min1 = 1e9;
	int min2 = 1e9;
	for (int i = 0; i < 3; i++) {
		int num;
		cin >> num;
		if (num < min1) min1 = num;
	}

	for (int i = 0; i < 2; i++) {
		int num;
		cin >> num;
		if (num < min2) min2 = num;
	}

	cout << min1 + min2 - 50 << "\n";

	return 0;
}
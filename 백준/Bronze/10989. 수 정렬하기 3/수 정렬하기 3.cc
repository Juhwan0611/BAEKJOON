#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int count[10001] = { 0 };
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		count[num]++;
	}

	for (int i = 0; i < 10001; i++) {
		if (count[i] != 0) {
			for (int k = 0; k < count[i]; k++) {
				cout << i << "\n";
			}
		}
	}

	return 0;
}
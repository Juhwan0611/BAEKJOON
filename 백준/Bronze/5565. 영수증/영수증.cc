#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < 9; i++) {
		int num;
		cin >> num;

		n -= num;
	}

	cout << n << "\n";

	return 0;
}
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	while (n--) {
		int a, b;
		cin >> a >> b;

		int res = 1;
		for (int i = 0; i < b; i++) {
			res = (res * a) % 10;
		}

		if (res == 0) {
			cout << 10 << "\n";
		}
		else {
			cout << res << "\n";
		}
	}

	return 0;
}
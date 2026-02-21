#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int k, n, m;
	cin >> k >> n >> m;
	
	int x = k * n;
	if (x <= m) {
		cout << 0 << "\n";
	}
	else {
		cout << x - m << "\n";
	}
	
	return 0;
}
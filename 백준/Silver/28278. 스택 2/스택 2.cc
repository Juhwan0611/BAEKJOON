#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	
	stack<int> v;
	while (n--) {
		int s;
		cin >> s;

		if (s == 1) {
			int num;
			cin >> num;
			v.push(num);
		}

		else if (s == 2) {
			if (v.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << v.top() << "\n";
				v.pop();
			}
		}

		else if (s == 3) {
			cout << v.size() << "\n";
		}

		else if (s == 4) {
			if (v.empty()) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}

		else if (s == 5) {
			if (v.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << v.top() << "\n";
			}
		}
	}

	return 0;
}
#include <iostream>
#include <string>
#include <queue>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	queue<int> v;

	while (n--) {
		string s;
		cin >> s;
		if (s == "push") {
			int num;
			cin >> num;
			v.push(num);
		}

		else if (s == "pop") {
			if (v.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << v.front() << "\n";
				v.pop();
			}
		}

		else if (s == "size") {
			cout << v.size() << "\n";
		}

		else if (s == "empty") {
			if (v.empty()) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}

		else if (s == "front") {
			if (v.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << v.front() << "\n";
			}
		}

		else if (s == "back") {
			if (v.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << v.back() << "\n";
			}
		}
	}

	return 0;
}

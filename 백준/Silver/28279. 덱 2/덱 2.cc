#include <iostream>
#include <vector>
#include <string>
#include <deque>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	deque<int> dq;

	while (n--) {
		int s;
		cin >> s;

		if (s == 1) {
			int num;
			cin >> num;
			dq.push_front(num);
		}

		else if (s == 2) {
			int num;
			cin >> num;
			dq.push_back(num);
		}

		else if (s == 3) {
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}

		else if (s == 4) {
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}

		else if (s == 5) {
			cout << dq.size() << "\n";
		}

		else if (s == 6) {
			if (dq.empty()) {
				cout << 1 << "\n";
			}
			else {
				cout << 0 << "\n";
			}
		}

		else if (s == 7) {
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.front() << "\n";
			}
		}

		else if (s == 8) {
			if (dq.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << dq.back() << "\n";
			}
		}
	}

	return 0;
}
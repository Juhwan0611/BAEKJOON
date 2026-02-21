#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	deque<int> v;

	while (n--) {
		string s;
		cin >> s;
		int num;

		if (s == "push_front") {
			cin >> num;
			v.push_front(num);
		}
		
		else if (s == "push_back") {
			cin >> num;
			v.push_back(num);
		}

		else if (s == "pop_front") {
			if (v.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << v.front() << "\n";
				v.pop_front();
			}
		}

		else if (s == "pop_back") {
			if (v.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << v.back() << "\n";
				v.pop_back();
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
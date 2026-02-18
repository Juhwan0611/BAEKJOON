#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;

	stack<char> v;
	int ans = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') {
			v.push('(');
		}

		else if (s[i] == ')') {
			if (s[i - 1] == '(') {
				v.pop();
				ans += v.size();
			}
			else {
				v.pop();
				ans += 1;
			}
		}
	}

	cout << ans << "\n";

	return 0;
}
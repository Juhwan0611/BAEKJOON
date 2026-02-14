#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(const string& a, const string& b) {
	return a > b;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<string> v(n);

	string enle; //출퇴근 입력 문자열
	for (int i = 0; i < n; i++) {
		cin >> v[i] >> enle;
	}

	stable_sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++) {
		if (i + 1 < n && v[i] == v[i + 1]) {
			i++;
		}
		else cout << v[i] << "\n";
	}
	return 0;
}
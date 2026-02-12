#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
	if (a.length() == b.length()) {
		return a < b; 
	}
	return a.length() < b.length();
}


int main() {
	int n;
	cin >> n;

	vector<string> v(n);

	for (int i = 0; i < n; i++) cin >> v[i];

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++) {
		if (i == 0 || v[i] != v[i - 1]) cout << v[i] << "\n";
	}
	
	return 0;
}
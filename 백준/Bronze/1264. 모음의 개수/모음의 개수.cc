#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
	string s;
	
	while (true) {
		getline(cin, s);
		if (s == "#") break;

		int count = 0;
		for (int i = 0; i < s.length(); i++) {
			char c = s[i];

			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
				c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
				count++;
			}
		}
		cout << count << "\n";
	}

	return 0;
}
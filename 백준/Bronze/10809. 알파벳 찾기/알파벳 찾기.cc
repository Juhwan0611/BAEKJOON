#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	
	cin >> s;
	
	int arr[26];
	for (int i = 0; i < 26; i++) {
		arr[i] = -1;
	}
	
	for (int i = 0; i < s.length(); i++) {
		int idx = s[i] - 'a';
		if (arr[idx] == -1) {
			arr[idx] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;	
}
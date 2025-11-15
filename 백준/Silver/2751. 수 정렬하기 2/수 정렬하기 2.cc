#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int main() {
	vector<int> v;
	int num;
	cin >> num;
	
	
	int n;
	for (int i = 0; i < num; i++) {
		cin >> n;
		v.push_back(n);
	}
	
	sort(v.begin(), v.end());
	
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
	
	return 0;
}
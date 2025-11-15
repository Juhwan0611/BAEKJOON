#include <stdio.h>
#include <iostream>
#include <vector>

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
	
	//버블 정렬 
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v.size() - 1 - i; j++) {
			if (v[j] > v[j + 1]) {
				int temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
	}
	
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
	
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<pair<int, int> > arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i].first >> arr[i].second;
	}

	for (int i = 0; i < n; i++) {
		int rank = 1;
		for (int j = 0; j < n; j++) {
			if (arr[i].first < arr[j].first && arr[i].second < arr[j].second) {
				rank++;
			}
		}
		cout << rank << " ";
	}

	return 0;
}
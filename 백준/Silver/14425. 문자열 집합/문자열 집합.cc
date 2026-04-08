#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	string arr[10001];

	//문자열 저장
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	//처음 부터 끝까지 정렬
	sort(arr, arr + n);

	int count = 0;
	string target;

	//검사
	for (int i = 0; i < m; i++) {
		cin >> target;

		int left = 0, right = n - 1;
		bool found = false;

		while (left <= right) {
			int mid = (left + right) / 2;

			if (arr[mid] == target) {
				found = true;
				break;
			}
			else if (arr[mid] < target) {
				left = mid + 1;
			}
			else {
				right = mid - 1;
			}
		}

		if (found) count++;
	}

	cout << count << "\n";

	return 0;
}
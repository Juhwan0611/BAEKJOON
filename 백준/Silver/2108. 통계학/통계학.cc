#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

bool compare(const int& a, const int& b) {
	return a < b;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> v(n);

	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sum += v[i];
	}

	//산술평균
	cout << (int)round((double)sum / n) << "\n";

	//중앙값
	stable_sort(v.begin(), v.end(), compare);
	cout << v[n / 2] << "\n";

	//빈도수(를 찾기위한 배열 생성, 절댓값이 4000을 넘어가지 않으므로 8001)
	int count[8001] = { 0 };
	for (int i = 0; i < n; i++) {
		count[v[i] + 4000]++; //방(배열)의 번호는 음수를 가질 수 없기 때문에 +4000 해주기. 
	}

	int maxcount = -1e9;
	for (int i = 0; i < 8001; i++) {
		if (maxcount < count[i]) maxcount = count[i];
	}

	//근데 이제 최빈값이 여러개일 때
	int res = 0;
	bool found = false;

	for (int i = 0; i < 8001; i++) {
		if (count[i] == maxcount) {
			if (count[i] == maxcount) {
				res = i - 4000;

				if (found) break; // 앞에서 한명 이미 찾았더라면(true) 멈추기. 아니라면(false) 계속돌리기
			}

			found = true; //위에서 찾았기 때문에 다음을 돌리기전 찾았다고 표시 해두기(true)
		}
	}
	cout << res << "\n";

	//범위
	cout << v[n - 1] - v[0] << "\n";

	return 0;
}
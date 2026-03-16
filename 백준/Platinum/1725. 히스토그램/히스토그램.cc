#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<ll> h(n + 2, 0);
	for (int i = 1; i <= n; i++) {
		cin >> h[i];
	}

	stack<int> s;
	s.push(0); //시작 인덱스
	ll max_area = 0;

	for (int i = 1; i <= n + 1; i++) {
		//현재 막대가 top보다 낮으면 top막대의 넓이 계산 시작
		while (!s.empty() && h[s.top()] > h[i]) {
			int chk = s.top();
			s.pop();

			//넓이  = 높이 * 너비
			ll area = h[chk] * (i - s.top() - 1);
			//비교 후 가장 큰 값 수정
			max_area = max(max_area, area);
		}
		s.push(i);
	}

	cout << max_area << "\n";

	return 0;
}
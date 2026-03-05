#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> dp(n + 1);

	dp[1] = 0; // 1은 연산이 0번

	for (int i = 2; i <= n; i++) {
		// 우선 1을 빼는 경우를 기본으로 설정
		dp[i] = dp[i - 1] + 1;

		// 2로 나누어 떨어지는 경우
		if (i % 2 == 0) {
			dp[i] = min(dp[i], dp[i / 2] + 1);
		}

		// 3으로 나누어 떨어지는 경우
		if (i % 3 == 0) {
			dp[i] = min(dp[i], dp[i / 3] + 1);
		}
	}

	cout << dp[n] << "\n";

	return 0;
}

// 모든 숫자는 반드시 1을 뺄 수 있다. 그래서 우선적으로 1을 뺴는 연산을 한다.
// else if 같은 비교를 쓰면 하나의 조건이 충족 되면 다음 조건을 무시 하기 때문에 반드시 if로 둘 다 비교 해줘야 한다.
#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	deque<int> v;

	for (int i = 1; i <= n; i++) {
		v.push_back(i);
	}

	int temp = 0;
	while (v.size() != 1) {
		// 우선 제일 위에 있는 카드를 버린다.
		v.pop_front();
		
		// 그 다음, 제일 위에 있는 카드를 제일 아래에 있는 카드 밑으로 옮긴다.
		temp = v.front();
		v.pop_front();
		v.push_back(temp);
	}

	cout << v.front();

	return 0;
}
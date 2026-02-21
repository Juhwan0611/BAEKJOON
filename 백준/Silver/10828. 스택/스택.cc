#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int stack[10001];
	int topIndex = -1; //현재 위치 표시기

	int n;
	cin >> n;

	while (n--) {
		string cmd;
		cin >> cmd;

		if (cmd == "push") {
			int x;
			cin >> x;
			topIndex++;
			stack[topIndex] = x; //스택에 추가
		}

		else if (cmd == "pop") {
			if (topIndex == -1) cout << -1 << "\n";
			else cout << stack[topIndex--] << "\n"; //출력후 감소
		}

		else if (cmd == "size") {
			cout << topIndex + 1 << "\n"; //0번 인덱스부터 시작하므로 +1
		}

		else if (cmd == "empty") {
			if (topIndex == -1) cout << 1 << "\n";
			else cout << 0 << "\n";
		}

		else if (cmd == "top") {
			if (topIndex == -1) cout << -1 << "\n";
			else cout << stack[topIndex] << "\n";
		}
	}

	return 0;
}
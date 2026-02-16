#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s = "";
	cin >> s;

	stack<char> left, right;
	for (int i : s) left.push(i);

	int m;
	cin >> m; //명령어 개수

	//편집과정
	while (m--) {
		char cmd;
		cin >> cmd;

		if (cmd == 'L') {
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
		}
		else if (cmd == 'D') {
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		}
		else if (cmd == 'B') {
			if (!left.empty()) {
				left.pop();
			}
		}
		else if (cmd == 'P') {
			char c;
			cin >> c;
			left.push(c);
		}
	}

	//왼쪽에 있는 것들 오른쪽으로 옮겨서 문자열 완성하기
	while (!left.empty()) { //커서가 맨 앞에 있으면 이미 완성된거임
		right.push(left.top());
		left.pop();
	}

	//출력
	while (!right.empty()) {
		cout << right.top();
		right.pop();
	}

	return 0;
}
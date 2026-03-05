#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	int x;
	cin >> x;

	vector<int> sticks;
	sticks.push_back(64); //처음에 64cm

	while (true) {
		int sum = 0;
		for (int s : sticks) sum += s; //현재 막대들의 총합

		if (sum == x) break; //목표길이에 도달하면 종료

		if (sum > x) {
			//1. 가장 짧은 막대를 찾아서 반으로 자름
			int shortest = sticks.back(); //보통 뒤에 넣으므로 뒤가 짧음
			sticks.pop_back();

			int half = shortest / 2;

			//2. 자른 것 중 하나를 제외했을 때도 x 이상이면 하나는 버림
			int temp_sum = 0;
			for (int s : sticks) temp_sum += s;

			sticks.push_back(half); //일단 하나 넣고
			if (temp_sum + half < x) { //나머지 하나도 더 필요하면 넣음
				sticks.push_back(half);
			}
		}
	}

	cout << sticks.size() << "\n"; //남은 막대개수 출력

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Student
{
	string name;
	int kor, eng, math;
};

bool compare(const Student& a, const Student& b) {
	if (a.kor != b.kor) {
		return a.kor > b.kor; // 1.국어 점수가 감소하는 순서로, 내림차순
	}
	if (a.eng != b.eng) {
		return a.eng < b.eng; // 2.국어 점수가 같으면 영어 점수가 증가하는 순서로, 오름차순
	}
	if (a.math != b.math) {
		return a.math > b.math; // 3. 국어 점수와 영어 점수가 같으면 수학 점수가 감소하는 순서로, 내림차순
	}
	return a.name < b.name;
	//모든 점수가 같으면 이름이 사전 순으로 증가하는 순서로 (단, 아스키 코드에서 대문자는 소문자보다 작으므로 사전순으로 앞에 온다
	//오름차순
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<Student> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;
	}

	stable_sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].name << "\n";
	}

	return 0;
}
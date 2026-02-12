#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct Point
{
	int x, y;
};

bool compare(const Point& a, const Point& b) {
	if (a.x == b.x) { //1순위 (x좌표)가 같다면
		return a.y < b.y; //2순위 (y좌표)를 비교
	}
	return a.x < b.x; //기본적으로는 x좌표가 작은 순
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<Point> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i].x >> v[i].y;
	}

	stable_sort(v.begin(), v.end(), compare);


	for (int i = 0; i < v.size(); i++) {
		cout << v[i].x << " " << v[i].y << "\n";
	}

	return 0;
}
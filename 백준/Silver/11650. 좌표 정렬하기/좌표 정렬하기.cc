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
	if (a.x == b.x) {
		return a.y < b.y;
	}
	return a.x < b.x;
	 
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

	for (int i = 0; i < n; i++) {
		cout << v[i].x << " " << v[i].y << "\n";
	}

	return 0;
}
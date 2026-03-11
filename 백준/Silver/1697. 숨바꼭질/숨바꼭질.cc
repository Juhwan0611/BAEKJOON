#include <iostream>
#include <queue>	
#include <algorithm>

using namespace std;

int dist[100005] = { -1 }; // -1로 기록없음으로 채우기

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	fill(dist, dist + 100005, -1);

	queue<int> q;
	q.push(n); // 현재 서있는 곳을 넣기
	dist[n] = 0; // 현재 서있는 곳은 도착까지 0초

	while (!q.empty()) {
		int cur = q.front(); //현재 위치 5
		q.pop();

		// 도착위치와 같아지면 출력
		if (cur == k) {
			cout << dist[cur] << "\n";
			return 0;
		}

		int next_pos[3] = { cur - 1, cur + 1, cur * 2 };

		for (int next : next_pos) {
			if (0 <= next && next < 100001 && dist[next] == -1) {
				dist[next] = dist[cur] + 1;
				q.push(next);
			}
		}
	}

	return 0;
}
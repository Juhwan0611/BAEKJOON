#include <iostream>
#include <queue>
#include <string>

using namespace std;

int board[101][101];
int dist[101][101];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		for (int j = 0; j < m; j++) {
			board[i][j] = s[j] - '0'; //문자를 숫자로 변환
			dist[i][j] = -1; // -1은 아직 방문하지 않았음을 의미
		}
	}

	// 시작점 설정 (0, 0)	
	queue<pair<int, int>> q;
	q.push({ 0, 0 });
	dist[0][0] = 1; // 시작지점도 칸 수에 포함

	// 큐가 빌 때까지 반복
	while (!q.empty()) {
		pair<int, int> curr = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = curr.first + dx[i];
			int ny = curr.second + dy[i];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (board[nx][ny] == 0 || dist[nx][ny] != -1) continue;

			// 새로운 지점 방문
			dist[nx][ny] = dist[curr.first][curr.second] + 1; // 이전 한 거리
			q.push({ nx, ny });
		}
	}

	// 도착점 (n - 1, m - 1) 거리 출력
	int res = dist[n - 1][m - 1];
	cout << res << "\n";

	return 0;
}
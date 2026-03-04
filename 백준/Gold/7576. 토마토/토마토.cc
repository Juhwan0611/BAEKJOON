#include <iostream>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

int board[1001][1001];

//상하좌우 이동을 위한 방향 배열 (dx, dy 테크닉)
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int m, n;
	cin >> m >> n;

	queue<pair<int, int>> q;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
			
			// 익은 토마토는 모두 큐에 삽입
			if (board[i][j] == 1) {
				q.push({ i, j });
			}
		}
	}

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
				if (board[nx][ny] == 0) {
					// 이전 토마토 값 +1을 저장하여 날짜를 기록
					board[nx][ny] = board[x][y] + 1;
					q.push({ nx, ny });
				}
			}
		}
	}

	int max_day = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			// 하나라도 익지 않은 토마토가 남아있다면  -1
			if (board[i][j] == 0) {
				cout << -1 << "\n";
				return 0;
			}

			max_day = max(max_day, board[i][j]);
		}
	}

	cout << max_day - 1 << "\n";

	return 0;
}
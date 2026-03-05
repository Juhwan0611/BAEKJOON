#include <iostream>
typedef long long ll;

using namespace std;

ll bridge[31][31];

int main() {
	for (int i = 0; i <= 30; i++) {
		bridge[i][0] = 1; // n개중 0개를 뽑는 경우들
		for (int j = 1; j <= i; j++) {
			if (i == j) bridge[i][j] = 1;
			else bridge[i][j] = bridge[i - 1][j - 1] + bridge[i - 1][j];
		}
	}
	
	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;
		
		cout << bridge[m][n] << "\n";
	}

	return 0;
}
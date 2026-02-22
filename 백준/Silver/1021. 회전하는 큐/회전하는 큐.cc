#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    deque<int> v;

    // 덱 먼저 채우기
    for (int i = 1; i <= n; i++) {
        v.push_back(i);
    }

    // 회전값
    int ans = 0;
    while (m--) {
        int x;
        cin >> x;

        int idx = 0;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == x) {
                idx = i;
                break;
            }
        }
        //왼쪽으로 돌릴지 오른쪽으로 돌릴지 결정
        if (idx <= v.size() / 2) {
            //뽑아낼 숫자가 맨앞로 올 때까지 뒤를 빼서 앞으로 보냄 (2번 연산)
            while (v.front() != x) {
                v.push_back(v.front());
                v.pop_front();
                ans++;
            }
        }  
        else {
            //뽑아낼 숫자가 맨앞로 올 때까지 앞를 빼서 뒤로 보냄 (3번 연산)
            while (v.front() != x) {
                v.push_front(v.back());
                v.pop_back();
                ans++;
            }
        }
        //맨 앞에 도착했다면 뽑기(1번 연산)
        v.pop_front();
    }

    cout << ans << "\n";
 
    return 0;
}
#include <iostream>
#include <queue> // priority_queue를 쓰기 위해 필요
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // '가장 작은 값'이 항상 위로 오게 하는 특수 큐
    priority_queue<int, vector<int>, greater<int>> pq;

    while (n--) {
        int x;
        cin >> x;
        
        if (x == 0) {
            if (pq.empty()) {
                cout << 0 << "\n";
            }
            else {
                // for문 돌릴 필요 없이 맨 위(top)만 보면 됨!
                cout << pq.top() << "\n";
                pq.pop(); // 꺼냈으니 지워주기
            }
        }
        else {
            pq.push(x);
        }
    }
    return 0;
}
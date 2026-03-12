#include <iostream>

using namespace std;

int main() {
    // 총 3개의 테스트 케이스
    for (int i = 0; i < 3; i++) {
        int n;
        cin >> n;

        __int128_t sum = 0; // 128비트 정수 사용
        for (int j = 0; j < n; j++) {
            long long temp;
            cin >> temp;
            sum += temp;
        }

        if (sum == 0) cout << "0" << endl;
        else if (sum > 0) cout << "+" << endl;
        else cout << "-" << endl;
    }
    return 0;
}
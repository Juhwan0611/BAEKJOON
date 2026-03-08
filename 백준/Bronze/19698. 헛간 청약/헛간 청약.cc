#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, l, w, h;
    cin >> n >> w >> h >> l;

    // 가로와 세로에 각각 몇 마리가 들어가는지 계산
    int horizontal = w / l;
    int vertical = h / l;

    // 전체 수용 가능한 공간 계산
    int res = horizontal * vertical;

    // 실제 소의 수와 수용량중 작은 값을 출력
    cout << min(n, res) << endl;

    return 0;
}
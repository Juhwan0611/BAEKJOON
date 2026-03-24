#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    // 4개의 시간 입력 
    cin >> a >> b >> c >> d;

    // 총 시간
    int total = a + b + c + d;

    // 분
    int minute = total / 60;

    // 초
    int second = total % 60;

    // 출력
    cout << minute << "\n";
    cout << second << "\n";

    return 0;
}
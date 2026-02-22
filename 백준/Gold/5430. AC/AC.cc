#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        // 수행 함수
        string p;
        cin >> p;
        // 수의 개수
        int n;
        cin >> n;
        // 배열의 정수가 주어짐 [1, 2, 3, 4, ...]
        string nums;
        cin >> nums;

        string temp = "";

        // 숫자 파싱
        deque<int> v;
        for (int i = 0; i < nums.length(); i++) {
            if (isdigit(nums[i])) {
                temp += nums[i];
            }
            else {
                if (!temp.empty()) {
                    v.push_back(stoi(temp));
                    temp = "";
                }
            }
        }

        bool reverse = false;
        bool error = false;

        for (char cmd : p) {
            // 수행 함수 체크 하기
            if (cmd == 'R') {
                reverse = !reverse;
            }

            else if (cmd == 'D') {
                //배열이 비었다면
                if (v.empty()) {
                    error = true;
                    break;
                }

                // D인데 뒤집히지 않았다면 (reverse가 true냐? 묻는것)
                if (!reverse) {
                    //앞에 삭제
                    v.pop_front();
                }
                // D인데 뒤집혔다면
                else {
                    //뒤에 삭제
                    v.pop_back();
                }
            }
        }

        // 에러 났을 때
        if (error) {
            cout << "error" << "\n";
        }

        //정상 출력
        else {
            cout << "[";
            //덱이 빌때 까지
            while (!v.empty()) {
                //역방향일때
                if (!reverse) {
                    cout << v.front();
                    v.pop_front();
                }
                //정방향일때
                else {
                    cout << v.back();
                    v.pop_back();
                }
                //마지막이 아니면 콤마
                if (!v.empty()) {
                    cout << ",";
                }
            }
            cout << "]" << "\n";
        }
    }

    return 0;
}
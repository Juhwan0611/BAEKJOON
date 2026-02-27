#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age, weight;

    while (true) {
        cin >> name >> age >> weight;

        // 이름이 '#'이고 나이 몸무게가 0인 경우 종료
        if (name == "#" && age == 0 && weight == 0) {
            break;
        }

        // 나이가 17세 초과이거나 몸무게가 80kg 이상인 경우
        if (age > 17 || weight >= 80) {
            cout << name << " Senior" << endl;
        } 
        else {
            cout << name << " Junior" << endl;
        }
    }

    return 0;
}
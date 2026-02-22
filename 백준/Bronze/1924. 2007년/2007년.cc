#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int day = 0;
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string week[7] = {"SUN", "MON","TUE", "WED", "THU", "FRI", "SAT"};    

    int x, y;
    cin >> x >> y;
    for (int i = 0; i < x - 1; i++) {
        day += month[i];
    }

    day = (day + y) % 7;

    cout << week[day] << "\n";

    return 0;
}
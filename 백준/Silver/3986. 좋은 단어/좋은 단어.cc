#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int count = 0;

    while (n--) {
        string s;
        cin >> s;

        stack<char> st;

        for (char c : s) {
            if (!st.empty() && st.top() == c) {
                st.pop();
            }
            else {
                st.push(c);
            }
        }

        if (st.empty()) {
            count++;
        }
    }

    cout << count << "\n";
    return 0;
}
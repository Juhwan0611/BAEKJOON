#include <iostream>
#include <stack>
using namespace std;

int main() {
	int k;
	cin >> k;
	
	stack<int> stack;
	for (int i = 0; i < k; i++) {
		int n;
		cin >> n;
		if (n != 0) stack.push(n);
		
		else stack.pop();
	}
	
	int sum = 0;
	
	while (1) {
		if (stack.size() == 0) break;
		else {
			sum += stack.top();
			stack.pop();
		}
	}
	
	cout << sum;
	
	return 0;
}
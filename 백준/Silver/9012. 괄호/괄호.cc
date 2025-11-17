#include <stdio.h>
#include <string.h>
#include <vector>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	
	char s[51];
	
	while (n--) {
		scanf("%s", s);
		vector<char> v;
		
		bool ok = true;
		
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] == '(') {
				v.push_back('(');
			}
			else if (s[i] == ')') {
				if (!v.empty()) {
					v.pop_back();
				}
				else {
					ok = false;
					break;
				}
			}
		}
		
		if (ok && v.empty()) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}	
	
	return 0;
}
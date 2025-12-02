#include <stdio.h>
#include <string.h>

int is_group_word(char s[]) {
	int visited[26] = { 0 };
	char prev = s[0];
	visited[prev - 'a'] = 1;
	
	for (int i = 0; i < strlen(s); i++) {
		char cur = s[i];
		
		if (cur != prev) { //새로운 문자가 나오면 
			if (visited[cur - 'a'] == 1) { //이전에 나온적이 있는데 지금은 연속이 아님 -> 그룹 단어 아님. 
				return 0;
	
			} 
			visited[cur - 'a'] = 1; // 처음 등장자리 
	
		}		
		prev = cur; //직전 문자 업데이트 
	
	}
	
	return 1; //끝까지 문제가 없으면 그룹단어 
}


int main() {
	int n;
	scanf("%d", &n);
	
	int count = 0;
	char s[101];
	
	for (int i = 0; i < n; i++) {
		scanf("%s", s);
		if (is_group_word(s)) {
			count++; //문제가 없으면 count 
		}
	}
	
	printf("%d\n",count);
	
	return 0;
}
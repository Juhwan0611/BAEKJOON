#include <stdio.h>
#include <vector>

using namespace std;

int n;
int k;
int cnt = 0;
int res = -1;
vector<int> arr(1000000, 0);

void merge_sort(int left, int right) {
	int mid = (left + right) / 2;
	
	if (left == right) {
		return;
	}
	
	merge_sort(left, mid);
	merge_sort(mid + 1, right);
	
	vector<int> temp;
	
	int x = left;
	int y = mid + 1;
	
	while (x <= mid && y <= right) {
		if (arr[x] < arr[y]) {
			temp.push_back(arr[x]); 
			x++; 
			cnt++;
			if (k == cnt) res = temp.back(); // k번째 일때 마지막으로 들어간 값
		}
		else {
			temp.push_back(arr[y]);
			y++;
			cnt++;
			if (k == cnt) res = temp.back();
		}
	}
	
	while (x <= mid) {
		temp.push_back(arr[x]);
		x++;
		cnt++;
		if (k == cnt) res = temp.back();
	}
	
	while (y <= right) {
		temp.push_back(arr[y]);
		y++;
		cnt++;
		if (k == cnt) res = temp.back();
	}

	for (int i = 0; i < temp.size(); i++) {
		arr[left + i] = temp[i];
	}	
}


int main() {
	scanf("%d %d", &n, &k);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	merge_sort(0, n - 1);
	
	printf("%d", res);

	return 0;
}
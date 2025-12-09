#include <stdio.h>
#include <vector>
using namespace std;

vector<int> arr(100000);

void merge_sort(int left, int right) {
	if (left == right) return;
	
	int mid = (left + right) / 2;
	
	merge_sort(left, mid);
	merge_sort(mid + 1, right);
	
	vector<int> temp;
	
	int x = left;
	int y = mid + 1;
	
	while (x <= mid && y <= right) {
		if (arr[x] < arr[y]) {
			temp.push_back(arr[x]);
			x++;
		}
		else {
			temp.push_back(arr[y]);
			y++;
		}
	}
	
	while (x <= mid) {
		temp.push_back(arr[x]);
		x++;
	}
	
	while (y <= right) {
		temp.push_back(arr[y]);
		y++;
	}
	
	for (int i = 0; i < temp.size(); i++) {
		arr[left + i] = temp[i];
	}
}


int main() {
	int n, x, count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]); 
	}
	
	merge_sort(0, n - 1);	
	
	scanf("%d", &x);
	
	int start = 0, end = n - 1;
	
	while (start < end) {
		if (arr[start] + arr[end] == x) {
			count++;
			start++;
			end--;
		}
		
		else if (arr[start] + arr[end] < x) {
			start++;
		}
		else {
			end--;
		}
	}
	
	printf("%d", count);
	
	return 0;
}
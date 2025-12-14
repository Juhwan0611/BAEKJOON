#include <iostream>
#include <vector>

using namespace std;

int n, k, cnt = 0, res = -1;
int ans[500001];
vector<int> arr(1000000, 0);
bool saved = false;


void merge_sort(int left, int right) {
	if (left == right) return;
	
	int mid = (left + right) / 2;
	
	merge_sort(left, mid);
	merge_sort(mid + 1, right);
	
	int x = left;
	int y = mid + 1;
	
	vector<int> temp;
	
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
		cnt++;
		
		if (cnt == k) {
			for (int i = 0; i < n; i++) {
				ans[i] = arr[i];
			}
			saved = true;
		}
	}
}


int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	merge_sort(0, n - 1);
	
	
	if (saved != true) {
		cout << "-1";
	}
	else { 
		for (int i = 0; i < n; i++ ) {
		cout << ans[i] << " ";
		}
	}
	
	return 0;
}
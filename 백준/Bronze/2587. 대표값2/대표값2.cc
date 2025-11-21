#include <stdio.h>
#include <vector>

using namespace std;

vector<int> arr(5);

void merge_sort(int left, int right) {
		int mid = (left + right) / 2;
		
		if (left == right) return;
		
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
	}	
}

int main() {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	
	merge_sort(0, 4);
	
	printf("%d\n", sum / 5);
	printf("%d\n", arr[2]);
	
	return 0;
}
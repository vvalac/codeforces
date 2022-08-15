#include <iostream>
using namespace std;

int main() {
	int max = 0;
	int nums[3];

	for (int i = 0; i < 3; i++) {
		cin >> nums[i];
	}

	int sums[5] = {
		nums[0] + nums[1] + nums[2],
		nums[0] * nums[1] * nums[2], 
		(nums[0] + nums[1]) * nums[2], 
		nums[0] * (nums[1] + nums[2]), 
		nums[0] + nums[1] * nums[2]
	};

	for (int i = 0; i < 4; i++) {
		if (sums[i] > max) {
			max = sums[i];
		}
	}
	
	cout << max;

	return 0;
}
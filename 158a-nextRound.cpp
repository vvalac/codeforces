#include <iostream>
using namespace std;

int main() {
	// get number of participants (n) and k-th place required to advance
	int n, k, cursor = 0;
	int scores[100];

	cin >> n >> k;

	// take inputs until carriage return, only intake 100 max
	while (true) {
		cin >> scores[cursor];
		cursor += 1;

		if (cin.peek() == '\n' || cursor > 100) {
			break;
		}
	}

	// reset cursor
	cursor = 0;

	// iterate through array until scores[k] is matched
	for (int i = 0; i < n; i++) {
		if (scores[i] >= scores[k - 1] && scores[i] > 0) {
			cursor += 1;
		}
	}

	cout << cursor;
	
	return 0;
}
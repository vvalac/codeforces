#include <iostream>
using namespace std;

int main() {
	// prototype
	int n, x = 0;
	string op;

	// get input
	cin >> n;

	// get n number of ops, track x
	for (int i = 0; i < n; i++) {
		cin >> op;

		if (op == "++X" || op == "X++") {
			x += 1;
		}

		else if (op == "--X" || op == "X--") {
			x -= 1;
		}

		else {
			return 1;
		}
	}

	cout << x;

	return 0;
}
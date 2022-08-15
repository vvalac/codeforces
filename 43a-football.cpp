#include <iostream>
using namespace std;

int main() {
	int n, a = 0, b = 0;
	string temp, sa, sb;

	cin >> n;

	for (int i = 0; i < n; i++) {

		cin >> temp;

		if (i == 0) {

			sa = temp;
			a++;
		
		}

		if (temp != sa) {

			sb = temp;
			b++;

		} else {

			a++;
		
		}

	}

	if (a > b) {

		cout << sa;

	} else {

		cout << sb;
	
	}

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
	string n;
	int luckynums[3] = { 4, 7, 47 };

	cin >> n;
	int num = stoi(n);

	if (1 > num > 1000) return 1;

	if (num % luckynums[0] == 0 || num % luckynums[1] == 0 || num % luckynums[2] == 0) {
		cout << "YES";
		return 0;
	}

	for (int i = 0; i < n.length(); i++) {

		if (!isdigit(n[i])) return 1;

		switch (n[i]) {
		case '4':
			continue;

		case '7':
			continue;

		default:
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
	return 0;
}
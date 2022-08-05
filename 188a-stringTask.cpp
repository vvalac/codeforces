#include <iostream>
using namespace std;

int main() {
	string input;
	string output;

	cin >> input;

	if (1 > input.length() > 100) return 1;

	for (int i = 0; i < input.length(); i++) {
		switch (tolower(input[i])) {
			case 'a':
				continue;
			case 'e':
				continue;
			case 'i':
				continue;
			case 'o':
				continue;
			case 'u':
				continue;
			case 'y':
				continue;
			default:
				output += ".";
				output += tolower(input[i]);
		}
	}

	cout << output;

	return 0;
}
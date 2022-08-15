#include <iostream>
using namespace std;

int main() {
	//prototype
	string input;
	bool capslock = true;

	// get input
	cin >> input;

	// set length
	int length = input.length();

	// check for caps lock error
	for (int i = 1; i < length; i++) {
		if (islower(input[i])) {
			capslock = false;
		}
	}

	// fix case
	if (capslock == true) {
		for (int i = 0; i < input.length(); i++) {
			if (islower(input[i])) {
				input[i] = toupper(input[i]);
			}

			else {
				input[i] = tolower(input[i]);
			}
		}

		cout << input;
	}

	else {
		cout << input;
	}

	return 0;
}
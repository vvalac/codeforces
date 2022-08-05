#include <iostream>
#include <string>
using namespace std;

int main() {
	// prototype variables
	unsigned int numI = 0;
	unsigned int numP;
	string input;

	// get number of problems in the contest
	cin >> numP;

	if (numP < 1 || numP > 1000) {
		return 3;
	}
	
	// get arrays of true/false results
	for (int i = 0; i < numP + 1; i++) {
		// get input
		getline(cin, input);

		/* ALTERNATE SOLUTION FOR LINE IN
		int first, second, third;
		while (numP--)
			cin >> first >> second >> third;
			if (first + second + third >= 2) { do stuff }
		*/

		// set counter to measure true/falses
		unsigned int counter = 0;

		// error check for length
		if (input.length() > 5) {
			return 2;
		}

		
		// iterate looking for 1s and 0s
		for (int i = 0; i < input.length(); i++) {

			if (isspace(input[i])) {
				continue;
			}

			if (isdigit(input[i])) {
				if (input[i] == '1') {
					counter = counter++;
				}
			}
		}

		if (counter >= 2) {
			numI = numI++;
		} 


	}
	// print number of good psets
	cout << numI;

	return 0;
}
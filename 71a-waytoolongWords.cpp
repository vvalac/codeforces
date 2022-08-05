#include <iostream>
#include <string>
using namespace std;

string shortenWord(string);

int main() {
	// set variables
	int numLines;
	string userWords[100];
	
	// get number of lines
	cin >> numLines;

	// make sure n is between 1 and 100
	if (numLines < 1 || numLines > 100) {
		return 1;
	}

	// get user input for numLines words
	for (int i = 0; i < numLines; i++) {
		cin >> userWords[i];
		/*
		// validation check for length
		if (userWords[i].length() > 100) {
			return 1;
		}
		// validation check for all lower
		for (int n = 0; n < userWords[n].length(); n++) {
			if (islower(userWords[i][n]) == false) {
				return 1;
			}
		} */
	}

	// output updated array
	for (int i = 0; i < numLines; i++) {
		userWords[i] = shortenWord(userWords[i]);
		cout << userWords[i] << endl;
	}

	return 0;
}

string shortenWord(string word) {
	if (word.length() > 10) {
		char firstLetter = word[0];
		char lastLetter = word[word.length() - 1];
		int length = word.length() - 2;
		word = firstLetter + to_string(length) + lastLetter;
		return word;
	}

	else {
		return word;
	}
}
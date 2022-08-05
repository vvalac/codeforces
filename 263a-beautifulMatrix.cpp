#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int beaut[5][5] = {
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,1,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0}
	};

	// prototype and set initial vars
	// set empty ugly matrix, d for input digits
	// set placeholder for grid tracking up/down/left/right
	int ugg[5][5];
	int d;
	int moves = 0;
	int movelr = 0;
	int moveud = 0;
	
	// get input to fill matrix by rows
	for (int i = 0; i < 5; i++) {
		int cursor = 0;

		// get input to fill matrix by columns
		while (true) {
			cin >> d;
			ugg[i][cursor] = d;
			cursor += 1;

			if (cin.peek() == '\n') {
				break;
			}
		}

		// if a 1 is detected, keep track of where it is
		for (int j = 0; j < 5; j++) {
			if (ugg[i][j] == 1) {
				movelr = j;
				moveud = i;
			}
		}

	}
	
	// if matrixes match, just print 0 and exit
	if (ugg[2][2] == beaut[2][2]) {
		cout << moves;
		return 0;
	}

	// find number of moves required to put 1 in the center
	moves += abs(2 - movelr);
	moves += abs(2 - moveud);

	cout << moves;
	return 0;
}

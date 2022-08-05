#include <iostream>
using namespace std;

int main() {
	// prototype board height m and width n
	int m, n, boardArea, totalDominos;

	int dominoSize = 2;

	// get board dimensions from user
	cin >> m >> n;


	if (!(1 <= m <= n <= 16)) {
		return 1;
	}

	boardArea = m * n;

	totalDominos = floor(boardArea / dominoSize);

	cout << totalDominos;

	return 0;
}
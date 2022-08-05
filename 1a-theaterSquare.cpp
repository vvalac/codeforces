#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// get input. input[0] = m, input[1] = n, input[2] = a
	// m * n == area of square, a^2 == flagstones
	long long input[3];
	long long stones;

	while(true) {
		for (int i = 0; i < 3; i++) {
			cin >> input[i];
		
		    if (1 > input[i] > 10E9) {
				return 1;
	    	}
		}

		if (cin.peek() == '\n') {
			break;
		}
	}
	
	stones = ((input[0] + input[2] - 1) / input[2]) * ((input[1] + input[2] - 1) / input[2]);

	cout << stones;
	return 0;
}
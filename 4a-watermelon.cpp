#include <iostream>
using namespace std;

int main()
{
	// get watermelon size from user
	int sizeWatermelon;
	cin >> sizeWatermelon; // store watermelon size

	// check if input is a number between 1 and 100
	// return 1 if input out of bounds
	if ((sizeWatermelon < 1 == true) || (sizeWatermelon > 100 == true)) {
		cout << "NO" << endl;
		return 1;
	} 

	// check if even
	else if (sizeWatermelon % 2 == 0) {
		// check if two even numbers make up the weight
		if ((sizeWatermelon - 2) % 2 == 0 && ((sizeWatermelon - 2) > 1)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	else {
		cout << "NO" << endl;
	}

	return 0;
}
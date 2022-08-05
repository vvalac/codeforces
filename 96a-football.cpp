#include <iostream>
using namespace std;

int main() {
	string players;
	int streak1 = 0;
	int streak0 = 0;

	cin >> players;

	for (int i = 0; i < players.length(); i++) {
		if (players[i] == '1') {
			streak1 += 1;
			streak0 = 0;

			if (streak1 >= 7) {
				cout << "YES";
				return 0;
			}
		}

		else if (players[i] == '0') {
			streak1 = 0;
			streak0 += 1;

			if (streak0 >= 7) {
				cout << "YES";
				return 0;
			}
		}
		
	}

	cout << "NO";

	return 0;
}
#include <iostream>
using namespace std;

int main() {
	string word;
	string hello = "hello";
	int ticker = 0;

	cin >> word;

	if (1 > word.length() > 100) return 1;

	for (int i = 0; i < word.length(); i++) {
		if (word[i] == hello[ticker]) {
			ticker += 1;
		}
	}

	if (ticker == 5) cout << "YES";
	else cout << "NO";

	return 0;
}
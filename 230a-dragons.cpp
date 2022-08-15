#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// s == kirito strength
	// n == num dragons on level
	// x == i-th dragon's strength
	// y == krito strength += if win

	int s, n, x, y;
	vector<pair <int, int>> dragons;

	cin >> s >> n;

	for (int i = 0; i < n; i++) {

		cin >> x >> y;

		dragons.push_back (make_pair(x, y));

	}
	sort(dragons.begin(), dragons.end());

	for (int i = 0; i < n; i++) {
		if (s <= dragons[i].first) {
			cout << "NO";
			return 0;
		}

		else {
			s += dragons[i].second;
		}
	}

	cout << "YES";

	return 0;
}
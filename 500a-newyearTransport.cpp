#include <iostream>
#include <vector>
using namespace std;


int main() {
	int n, t, temp;
	vector<int> a;
	bool trapped = false;
	bool success = false;

	cin >> n >> t;

	for (int i = 0; i < n - 1; i++) {
		cin >> temp;
		a.push_back(temp);
	}

	for (int i = 0; i < n - 1; i++) {

		while (!trapped || !success) {
			temp = a[i];

			i = i + temp;

			if (i == t - 1) {
				success = true;
				cout << "YES";
				return 0;
			}

			if (i >= n - 1) {
				trapped = true;
				break;
			}

		}
	}

	cout << "NO";

	return 0;
}
#include <iostream>
using namespace std;

int main() {
	int a, b, c, r = 0;

	cin >> a >> b;

	c = a;

	while (a > b) {
		r += a % b;
		c += a / b;
		a = a / b;
		a += r;
		r = 0;
	}

	c += (a / b);

	cout << c;

	return 0;
}
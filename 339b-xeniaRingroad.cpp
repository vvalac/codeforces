#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m, i = 0;
	long long task, sum = 0, house = 1;

	cin >> n >> m;

	while (i < m) {
		
		cin >> task;

		if (task == house) {
			i++;
		}

		else if (task > house) {
			sum += (task - house);
			house = task;
			i++;
		}

		else if (task < house) {
			sum = sum + n - (house - task);
			house = task;
			i++;
		}

		if (cin.peek() == '\n') {
			break;
		}

	}


	cout << sum;

	return 0;
}
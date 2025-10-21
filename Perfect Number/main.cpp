#include <iostream>
using namespace std;

int main() {
	int n, sum = 0;
	cout << "Give me the number: ";
	cin >> n;

	for (int i = 1; i < n; i++) {

		if (n % i == 0) {
			sum = sum + i;
		}
	}

	cout << (n > 0 && sum == n ? "True" : "False");

	return 0;
}
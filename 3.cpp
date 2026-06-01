/* Разложение натурального числа на простые множители */

#include <iostream>
#include <math.h>
using namespace std;

int IsPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0 && n != 2)
			return 0;
	}
	return 1;
}

int main() {
	int n;
	bool check_moment = false; // флаг для более эстетичного вывода (без '*' в конце)

	cout << "Input a number: ";
	cin >> n;
	if (IsPrime(n) == 1) {
		cout << "\nIt's a prime number!\n";
		return 0;
	}
	cout << endl << n << " = ";
	for (int m = 2; m <= n / 2; m++) { // m - множитель (от англ. 'multiplier')
		int tmp = n;
		if (IsPrime(m) == 0)
			continue;
		if (check_moment && n % m == 0)
			cout << " * ";
		while (tmp % m == 0) {
			cout << m;
			tmp /= m;
			if (tmp % m == 0)
				cout << " * ";
		}
		if (tmp < n)
			check_moment = true;
	}
	cout << endl;

	return 0;
}

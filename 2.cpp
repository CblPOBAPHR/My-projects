#include "2.h"
#define SIZE 6
#include <iostream>
using namespace std;
int main() {
	int mas[SIZE], beg_value;

	cout << "Input the beginning value of generator: ";
	cin >> beg_value;
	Init_mas(mas, SIZE, beg_value);
	Print_mas(mas, SIZE);
	int* n1 = First_neg(mas, SIZE);
	int* n2 = Last_pos(mas, SIZE);
	if (n1 == nullptr || n2 == nullptr)
		cout << "ERROR" << endl;
	else {
		Swap(n1, n2);
		Print_mas(mas, SIZE);
	}

	return 0;
}

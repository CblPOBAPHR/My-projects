#include <iostream>
#include <cstdlib>
using namespace std;

void Init_mas(int* mas, int n, int value) {
	srand(value);
	for (int i = 0; i < n; i++)
		mas[i] = rand() % 19 - 9;
}
void Print_mas(int* mas, int n) {
	for (int i = 0; i < n; i++)
		cout << mas[i] << " ";
	cout << endl;
}
int* First_neg(int* mas, int n) {
	int* p = nullptr;
	for (int i = 0; i < n; i++, mas++) {
		if (*mas < 0) {
			p = mas;
			break;
		}
	}
	return p;
}
int* Last_pos(int* mas, int n) {
	int* p = nullptr;
	for (int i = n - 1; i >= 0; i--) {
		if (mas[i] > 0) {
			p = &mas[i];
			break;
		}
	}
	return p;
}
void Swap(int* elem_1, int* elem_2) {
	int tmp = *elem_1;
	*elem_1 = *elem_2;
	*elem_2 = tmp;
}

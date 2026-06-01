/*
Пользователь вводит отсортированный по возрастанию массив целых неповторяющихся 10 чисел
Затем вводится число для поиска.
Нужно найти это число в массиве и вывести с новой строки часть массива,
начиная с заданного числа и до конца массива.
Если искомого числа в массиве нет, то вывести "ERROR".
*/
#include <iostream>
#define size 10
using namespace std;
int main() {
	int mas[size];
	int n;
	int* left_border = mas, * right_border = mas + size - 1, * middle_elem = NULL; // middle_elem обязательно должна быть инициализирована
	bool flag = false;

	cout << "Input the elements of massive: ";
	for (int k = 0; k < size; k++)
		cin >> mas[k];
	cout << "Input a number: ";
	cin >> n;
	while (left_border <= right_border) {
		middle_elem = left_border + (right_border - left_border) / 2;
		if (*middle_elem == n) {
			flag = true;
			break;
		}
		if (*middle_elem < n)
			left_border = middle_elem + 1;
		if (*middle_elem > n)
			right_border = middle_elem - 1;
	}
	if (!flag)
		cout << "ERROR";
	else
		for (int* ptr = middle_elem; ptr < mas + size; ptr++)
			cout << *ptr << " ";
	cout << endl;

	return 0;
}

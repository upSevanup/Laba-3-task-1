#include <iostream>
#include <clocale>

using namespace std;

/*лабораторная работа 3. Поливцев Михаил, ИВТ-31. Задание 1. индивидуальный вариант 16.
* если целое число a > 3 и целое число b <= 4 вывести "истина", иначе "ложь".
*/

int main() {
	setlocale(LC_ALL, "ru");

	int a, b;

	cout << "Введите два целых числа >> ";
	cin >> a >> b;

	if (a > 4 && b <= 3)
		cout << "Истина" << endl;
	else 
		cout << "Ложь" << endl;
}
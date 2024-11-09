#include <iostream>
#include "windows.h"
#include <cmath>
using namespace std;

//If5.Дано три цілих числа. Знайти кількість додатних та від'ємних чисел в початковому наборі
void task_if5(); //завдання 1, декларація функції

// Дано координати точки на площині (х, у).
// Визначити, чи потрапляє точка в фігуру заданого кольору (або групу фігур)
// і вивести відповідне повідомлення.
void task_geom4(); //завдання 2, декларація функції

int main()
{
	SetConsoleOutputCP(1251);
	int menu;
	cout << "Номер завдання:";
	cin >> menu;
	// перемикання між завданнями
	switch (menu)
	{
	case 1: task_if5(); break; // Завдання 1
	case 2: task_geom4(); break; // Завдання 2
	default: cout << "Помилка! (Тільки 1,2)" << endl; // Повідомлення про помилку
	}
	system("pause");
	return 0;
}

// Завдання 1 реалізація
void task_if5()
{
	int a, b, c;
	cout << "**************** If 5 ****************" << endl;
	cout << "Введіть три цілих числа:"; // введення чисел
	cin >> a >> b >> c;
	int positiveCount = 0, negativeCount = 0; // ініціалізація змінних

	if (a > 0) positiveCount++; // перевірка кожного числа окремо
	if (a < 0) negativeCount++;
	if (b > 0) positiveCount++;
	if (b < 0) negativeCount++;
	if (c > 0) positiveCount++;
	if (c < 0) negativeCount++; 

	cout << "Кількість додатніх чисел:" << positiveCount << endl; // виведення результату
	cout << "Кількість від'ємних чисел:" << negativeCount << endl;
}

// Завдання 2, реалізація
void task_geom4()
{
	float x, y, r;
	const double pi = 3.141592;
	cout << "**************** Point in geometry region 4 ****************" << endl;
	cout << "Введіть координати точки:"; // введення координат точки 
	cin >> x >> y;
	cout << "Введіть радіус кола:"; //введення радіуса кола
	cin >> r;
	if (!cin || r <= 0) // перевірка коректності даних
		cout << "Повинно бути додатнім!";
	else {
		if (x * x + y * y <= r * r) { // перевірка на належність точки до кола
			cout << "Точка належить колу." << endl; // виведення результатів
		}
		else {
			cout << "Точка не належить колу." << endl;
		}
	} 
	double area = (pi - 0.5) * r * r; // обчислення площі фігури без жовтої області
	double perimeter = 2 * pi * r - ((pi * r) / 2 + 2 * r); // від периметра повного кола потрібно
	// відняти периметер жовтої частини
	cout << "Площа фігури:" << area << endl; // виведення результату 
	cout << "Периметер фігури:" << perimeter << endl;
}

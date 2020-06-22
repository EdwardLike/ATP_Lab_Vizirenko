#include <iostream>
using namespace std;
int main()
{	setlocale(LC_ALL, "ru")
	int sum;
	cout << "Обчислення сумми перших десяти натуральних чисел за допомогою арифметичної прогресії" << endl;
	sum = (float)(2 * 0 + 1 * (10 - 1)) / 2 * 10;
	cout << "Сума: " << sum;	
	return 0;
}
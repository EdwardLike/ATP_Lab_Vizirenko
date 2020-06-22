#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru")
	int a, b, c;
	cout << "Введіть перше та друге число для додавання: ";
	cin >> a >> b;
	c = a + b;
	cout << "Сума двух чисел: " << c;
	return 0;
}

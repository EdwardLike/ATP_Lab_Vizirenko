#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru")
	float a, b, c, d, x1, x2;
	cout << "Введіть a b c щоб знайти корені квадратного рівняння ";
	cin >> a; cin >> b; cin >> c;
	d = pow(b, 2) - 4 * a * c;
	if (d < 0)
	{
		cout << "Рівняння не має коренів" << endl;
		return 1;
	}
	cout << "Дискримінант: " << d << endl;
	if (d == 0)
	{	x1 = -b / (2 * a);
		cout << "Один корінь: " << x1;
	}
	else
	{	x1 = (-b - sqrt(d)) / (2 * a);
		x2 = (-b + sqrt(d)) / (2 * a);
		cout << "Перший корінь: " << x1 << endl;
		cout << "Другий корінь: " << x2 << endl;
	}
	return 0;
}

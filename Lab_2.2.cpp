#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru")
	float a, b, c, d, x1, x2;
	cout << "������ a b c ��� ������ ����� ����������� ������� ";
	cin >> a; cin >> b; cin >> c;
	d = pow(b, 2) - 4 * a * c;
	if (d < 0)
	{
		cout << "г������ �� �� ������" << endl;
		return 1;
	}
	cout << "�����������: " << d << endl;
	if (d == 0)
	{	x1 = -b / (2 * a);
		cout << "���� �����: " << x1;
	}
	else
	{	x1 = (-b - sqrt(d)) / (2 * a);
		x2 = (-b + sqrt(d)) / (2 * a);
		cout << "������ �����: " << x1 << endl;
		cout << "������ �����: " << x2 << endl;
	}
	return 0;
}

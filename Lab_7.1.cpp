#include <iostream>
#include <stdlib.h>
using namespace std;

struct complex
{
	float a; //real
	float b; //imagine
};

int showChoice()
{
	system("cls");
	cout << "����i�� ����� ���� ������ �i����i��� ����� 1-4, �� ������i�� Enter, ��� ������� ����������� ������i�.\n";
	cout << "���i� ����i�� ������� �� ����� ������� ������� ������������ ����� ����� ����i� i ������i�� Enter.\n";
	cout << "� ���i� ��� ���� ����� ���������� �����.\n����� ���� �������� ��������� ������i�.\n";
	cout << "��� ���������� �� ��������� ���� ������i�� ����-��� ����i��.\n";
	cout << "1. Add (���������).\n";
	cout << "2. Substruct (�i��i�����).\n";
	cout << "3. Multiply (��������)\n";
	cout << "4. Divide (�i�����)\n";
	cout << "5. ���������� ��������\n";
}

complex add(complex a, complex b)
{
	complex c;
	c.a = a.a + b.a;
	c.b = a.b + b.b;
	return c;
}

complex substruct(complex a, complex b)
{
	complex c;
	c.a = a.a - b.a;
	c.b = a.b - b.b;
	return c;
}

complex multiply(complex a, complex b)
{
	complex c;
	c.a = a.a * b.a - a.b * b.b;
	c.b = a.a * b.b + b.a * a.b;
	return c;
}

complex divide(complex a, complex b)
{
	complex c;
	float d;
	d = b.a * b.a + b.b * b.b;
	c.a = (a.a * b.a + a.b * b.b) / d;
	c.b = (b.a * a.b - a.a * b.b) / d;
	return c;
}

int main()
{
	int n = 0;
	complex a, b, c;
	setlocale(LC_ALL, "Rus");
	while (1)
		switch (n)
		{
			case 1:
				c = add(a, b);
				cout << c.a << " " << c.b << endl;
				system("pause");
				n = 0;
				break;
			case 2:
				c = substruct(a, b);
				cout << c.a << " " << c.b << endl;
				system("pause");
				n = 0;
				break;
			case 3:
				c = multiply(a, b);
				cout << c.a << " " << c.b << endl; 
				system("pause");
				n = 0;
				break;
			case 4:
				c = divide(a, b);
				cout << c.a << " " << c.b << endl; 
				system("pause");
				n = 0;
				break;
			case 5:
				return 0;		
			default:;
				showChoice();
				cin >> n;
				if (n != 5) cin >> a.a >> a.b >> b.a >> b.b;
		}
}

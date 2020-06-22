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
	cout << "Select a menu item by entering the corresponding number 1-4, and press Enter to specify the arithmetic operation.\n";
	cout << "Then enter the real and imaginary part of the first complex number with a space and press Enter.\n";
	cout << "And then the same second complex number.\nThe result of the operation will be displayed below.\n";
	cout << "To return to the main menu, press any key.\n";
	cout << "1. Add.\n";
	cout << "2. Substruct.\n";
	cout << "3. Multiply\n";
	cout << "4. Divide\n";
	cout << "5. Completion of the program\n";
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

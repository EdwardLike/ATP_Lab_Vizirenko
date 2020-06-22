#include <iostream>
#include <stdlib.h>
using namespace std;

int showChoice()
{	
	system("cls");
	cout << "Select a menu item by entering the appropriate digit 1-4,\nand press Enter to specify the arithmetic operation.";
	cout << "Then enter two numbers with a space and press Enter.\nThe result of the operation will be displayed below.";
	cout << "To return to the main menu, press any key.\n";
	cout << "1. Add.\n";
	cout << "2. Substruct.\n";
	cout << "3. Multiply.\n";
	cout << "4. Divide.\n";
	cout << "5. Completion of the program\n";
	return 0;
}

float add(float a, float b)
{
	return a + b;
}

float substruct(float a, float b)
{
	return a - b;
}

float multiply(float a, float b)
{
	return a * b;
}

float divide(float a, float b)
{
	return a / b;
}

int main()
{
	int n = 0;
	float a, b;
	while (1)
		switch (n)
		{
			case 1:
				cout << add(a, b) << endl;
				system("pause");
				n = 0;
				break;
			case 2:
				cout << substruct(a, b) << endl;
				system("pause");
				n = 0;
				break;
			case 3:
				cout << multiply(a, b) << endl;
				system("pause");
				n = 0;
				break;
			case 4:
				cout << divide(a, b) << endl;
				system("pause");
				n = 0;
				break;
			case 5:
				return 0;		
			default:;
				showChoice();
				cin >> n;
				if (n != 5) cin >> a >> b;
		}
}


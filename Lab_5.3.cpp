#include <iostream>
using namespace std;

int main()
{
    int c, n, x, y, a[20];
	setlocale(LC_ALL, "Rus");
    cout << "Задайте кiлькiсть елементiв масиву: ";
    cin >> n;
	cout << "Введiть через пробiл елементи масиву у виглядi цiлих чисел: " << endl;
    for (c = 0; c < n; c++) cin >> a[c];
	x = 2147483647;
	y = -2147483648; 
	for (c = 0; c < n; c++) 
	{
		if (x > a[c]) x = a[c];
		if (y < a[c]) y = a[c];
  	}
	cout << "Найменше значення елементу масива: " << x << endl;
	cout << "Найбiльше значення елементу масива: " << y << endl;
    return 0;
}


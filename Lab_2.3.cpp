#include <iostream>
using namespace std;
int main()
{	setlocale(LC_ALL, "ru")
	int a, b, c, d, e, f;
	cout << "Введіть 5 оцінок від 0 до 100: ";
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	f = (a + b + c + d + e) / (float)5;
	cout << "Середній бал: " << f << endl;
	switch (f / 10)
	{
		case 10:
		case 9:
		case 8:
		case 7:
		case 6:
			cout << "1. Процент вище 60 балів - Перший поділ";
			break;
		case 5:
			cout << "2. Процент між 50 та 59 балами - Другий поділ";
			break;
		case 4:
			cout << "3. Процент між 40 та 49 балами - Третій поділ";
			break;
		default:
			cout << "4. Процент нище 40 балів - Не здав";
	}	
	return 0;
}

#include <iostream>
using namespace std;
int main()
{   setlocale(LC_ALL, "ru")
	int a;
	cout << "Введите число для перевірки: " << endl ;
	cin >> a;
	(a < 0) ? (cout << "Число негативне" << endl) : (a > 0)? (cout << "Число позитивне" << endl) : (cout <<  "Число це нуль" << endl );
	
	return 0;
}

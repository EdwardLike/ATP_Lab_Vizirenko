#include <iostream>
#include <math.h>
using namespace std;
int main()
{	setlocale(LC_ALL, "ru")
	int a, b, c;
	float s, q;
	cout << "Введіть сторони трикутника: ";
	cin >> a;
	cin >> b;
	cin >> c;
	s = ((float) a + b + c) / 2;
	q = sqrt ((float)s*(s-a)*(s-b)*(s-c));
	cout << "Площа трикутника: " << q;
return 0;
}

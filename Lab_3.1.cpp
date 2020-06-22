#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b, c;
	float s, v;
	cout << "Enter the sides of the triangle: ";
	cin >> a;
	cin >> b;
	cin >> c;
	s = ((float) a + b + c) / 2;
	v = sqrt ((float)s*(s-a)*(s-b)*(s-c));
	cout << "Triangle area: " << v;
return 0;
}

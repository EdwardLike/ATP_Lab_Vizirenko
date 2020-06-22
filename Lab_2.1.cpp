#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter the first corner of the triangle: ";
	cin >> a; 
	cout << "Enter the second corner of the triangle: ";
	cin >> b;
	cout << "Enter the third corner of the triangle: ";
	cin >> c;
	if (a + b + c == 180) 
		cout << "Triangular right" << endl;
	else
		cout << "The triangle is wrong" << endl;
	return 0;
}

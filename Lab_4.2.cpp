#include <iostream>
using namespace std;

int zero_small(int &a, int &b)
{
	if (a < b) 
		a = 0;
	else if (a > b)
		b = 0;
	return 0;
}

int main()
{
	int a, b;
	cout << "Enter 2 numbers A and B, the smaller will be = 0: ";
	cin >> a >> b;
	zero_small(a, b);
	cout << a << " " << b;
	return 0;
}



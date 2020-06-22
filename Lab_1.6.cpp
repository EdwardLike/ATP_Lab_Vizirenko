#include <iostream>
using namespace std;
int main()
{   int y, m, d;
	cout << "Enter the number of days:";
	cin >> d;
	y = d / 365;
	m = (d % 365) / 30;
	d = (d % 365) % 30;
	cout << "Years: " << y << " Months: " << m << " Days: " << d << endl;
	return 0;
}

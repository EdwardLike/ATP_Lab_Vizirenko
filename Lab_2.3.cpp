#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, f;
	cout << "Enter 5 ratings from 0 to 100: ";
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	f = (a + b + c + d + e) / (float)5;
	cout << "Average mark: " << f << endl;
	switch (f / 10)
	{
		case 10:
		case 9:
		case 8:
		case 7:
		case 6:
			cout << "1. Percentage above 60 mark - The first division";
			break;
		case 5:
			cout << "2. Percentage between 50 and 59 mark - The second division";
			break;
		case 4:
			cout << "3. Percentage between 40 and 49 mark - Third division";
			break;
		default:
			cout << "4. Percentage below 40 mark - Did not pass";
	}	
	return 0;
}

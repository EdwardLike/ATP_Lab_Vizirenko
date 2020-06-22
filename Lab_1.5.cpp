#include <iostream>
using namespace std;
int main()
{   int a;
	cout << "Enter a number to verify: " << endl ;
	cin >> a;
	(a < 0) ? (cout << "The number is negative" << endl) : (a > 0)? (cout << "The number is positive" << endl) : (cout <<  "The number is zero" << endl );
	
	return 0;
}

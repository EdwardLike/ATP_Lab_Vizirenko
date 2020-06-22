#include <iostream>
using namespace std;
int main()
{   char s;
	cout << "Enter the character: ";
	cin >> s;
	int a = (int)s;
	if (a >= 48 && a <= 57)
		cout << "|0 – 9|48 – 57|: " << a; 
	else if (a >= 65 && a <= 90)
		cout << "|A – Z|65 – 90|: " << a;
	else if (a >= 97 && a <= 122)
		cout << "|a – z|97 – 122|: " << a; 
	else if (a >= 0 && a <= 47 | a >= 58 && a <= 64 | a >= 91 && a <= 96 | a >= 123 && a <= 127)
		cout << "|Special characters|0 - 47, 58 - 64, 91 - 96, 123 – 127|: " << a; 
	else
		cout << "|-|-|: " << a; 
	return 0;
}

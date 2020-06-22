#include <iostream>
using namespace std;
int main()
{	
	int x, z;
	float s;
	cout << "Enter the number of members: ";
	cin >> z;
	s = 1;
	for (x = 2; x <= z; x++) s = s + (float)1 / x;
	cout << "Amount: 1 + 1/2 + ... + 1/n: " << s << endl;		
	return 0;
}

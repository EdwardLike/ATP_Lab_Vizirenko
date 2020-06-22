#include <iostream>
using namespace std;
int main()
{	setlocale(LC_ALL, "ru")
	int a, b, c;
	cout << "¬вед≥ть перший кут трикутника: ";
	cin >> a; 
	cout << "¬вед≥ть другий кут трикутника: ";
	cin >> b;
	cout << "¬вед≥ть трет≥й кут трикутника: ";
	cin >> c;
	if (a + b + c == 180) 
		cout << "“рикутний правильный" << endl;
	else
		cout << "“рикутний неправильный" << endl;
	return 0;
}

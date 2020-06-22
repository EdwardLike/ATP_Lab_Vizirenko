#include <iostream>
using namespace std;
int main()
{	setlocale(LC_ALL, "ru")
	char s;
	cout << "¬вед≥ть символ: ";
	cin >> s;
	int a = (int)s;
	if (a >= 48 && a <= 57)
		cout << "|0 Ц 9|48 Ц 57|: " << a; 
	else if (a >= 65 && a <= 90)
		cout << "|A Ц Z|65 Ц 90|: " << a;
	else if (a >= 97 && a <= 122)
		cout << "|a Ц z|97 Ц 122|: " << a; 
	else if (a >= 0 && a <= 47 | a >= 58 && a <= 64 | a >= 91 && a <= 96 | a >= 123 && a <= 127)
		cout << "|—пец≥альн≥ символи|0 - 47, 58 - 64, 91 - 96, 123 Ц 127|: " << a; 
	else
		cout << "|-|-|: " << a; 
	return 0;
}

#include <iostream>
using namespace std;
int main()
{	setlocale(LC_ALL, "ru")
	int a, n;
	float s;
	cout << "������ ������� �����: ";
	cin >> n;
	s = 1;
	for (a = 2; a <= n; a++) s = s + (float)1 / a;
	cout << "�����: 1 + 1/2 + ... + 1/n: " << s << endl;		
	return 0;
}

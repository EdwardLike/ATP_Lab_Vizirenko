#include <iostream>
using namespace std;
int main()
{	setlocale(LC_ALL, "ru")
	int a, b, c;
	cout << "������ ������ ��� ����������: ";
	cin >> a; 
	cout << "������ ������ ��� ����������: ";
	cin >> b;
	cout << "������ ����� ��� ����������: ";
	cin >> c;
	if (a + b + c == 180) 
		cout << "��������� ����������" << endl;
	else
		cout << "��������� ������������" << endl;
	return 0;
}

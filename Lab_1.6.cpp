#include <iostream>
using namespace std;
int main()
{  setlocale(LC_ALL, "ru")
	int y, m, d;
	cout << "������ ������� ���: ";
	cin >> d;
	y = d / 365;
	m = (d % 365) / 30;
	d = (d % 365) % 30;
	cout << "����: " << y << " ̳�����: " << m << " ���: " << d << endl;
	return 0;
}

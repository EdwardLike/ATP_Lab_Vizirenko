#include <iostream>
using namespace std;
int main()
{	setlocale(LC_ALL, "ru")
	int a, b, c, d, e, f;
	cout << "������ 5 ������ �� 0 �� 100: ";
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	f = (a + b + c + d + e) / (float)5;
	cout << "������� ���: " << f << endl;
	switch (f / 10)
	{
		case 10:
		case 9:
		case 8:
		case 7:
		case 6:
			cout << "1. ������� ���� 60 ���� - ������ ����";
			break;
		case 5:
			cout << "2. ������� �� 50 �� 59 ������ - ������ ����";
			break;
		case 4:
			cout << "3. ������� �� 40 �� 49 ������ - ����� ����";
			break;
		default:
			cout << "4. ������� ���� 40 ���� - �� ����";
	}	
	return 0;
}

#include <iostream>
using namespace std;
int main()
{   setlocale(LC_ALL, "ru")
	int a;
	cout << "������� ����� ��� ��������: " << endl ;
	cin >> a;
	(a < 0) ? (cout << "����� ���������" << endl) : (a > 0)? (cout << "����� ���������" << endl) : (cout <<  "����� �� ����" << endl );
	
	return 0;
}

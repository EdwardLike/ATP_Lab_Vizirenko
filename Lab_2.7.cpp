#include <iostream>
using namespace std;
const int c = 20;
int main()
{
    int i, c, a[20], x = 0, y = 0, z = 0;
	cout << "������ ������� ��������: ";
    cin >> c;
    for (i = 0; i < c; i++) cin >> a[i];
	for (i = 0; i < c; i++)
		if (a[i] < 0)
			x++;
		else if (a[i] > 0)
			y++;
		else
			z++;
    cout << "����������: " << x << " ����������: " << y << " ����: " << z << endl;
    return 0;
}

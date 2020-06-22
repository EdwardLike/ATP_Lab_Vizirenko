#include <iostream>
using namespace std;

int MIX(int a[], int m, int b[], int n, int c[], int &p)
{
	int y, j, k;

	p = m + n;
    j = 0; k = p - 1;
	for (y = 0; y < m; y++)
		if (a[y] % 2 == 0)
		{
			c[j] = a[y];
			j++;
		}
		else
		{
			c[k] = a[y];
			k--;
		}
	for (y = 0; y < n; y++)
		if (b[y] % 2 == 0)
		{
			c[j] = b[y];
			j++;
		}
		else
		{
			c[k] = b[y];
			k--;
		}
	return p;
}

int main()
{
    int y, m, a[20], n, b[20], p, c[20];
	setlocale(LC_ALL, "Rus");
    cout << "������� �i���i��� �������i� ������ A: ";
    cin >> m;
	cout << "����i�� ����� ����i� �������� ������ A � ������i �i��� �����: " << endl;
    for (y = 0; y < m; y++) cin >> a[y];
	cout << "������� �i���i��� �������i� ������ B: ";
    cin >> n;
	cout << "����i�� ����� ����i� �������� ������ B � ������i �i��� �����: " << endl;
    for (y = 0; y < n; y++) cin >> b[y];
	MIX(a, m, b, n, c, p);
	cout << endl;
    for (y = 0; y < p; y++) cout << c[y] << " "; 
    cout << endl;
    return 0;
}



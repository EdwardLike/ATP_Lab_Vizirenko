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
    cout << "Задайте кiлькiсть елементiв масиву A: ";
    cin >> m;
	cout << "Введiть через пробiл елементи масиву A у виглядi цiлих чисел: " << endl;
    for (y = 0; y < m; y++) cin >> a[y];
	cout << "Задайте кiлькiсть елементiв масиву B: ";
    cin >> n;
	cout << "Введiть через пробiл елементи масиву B у виглядi цiлих чисел: " << endl;
    for (y = 0; y < n; y++) cin >> b[y];
	MIX(a, m, b, n, c, p);
	cout << endl;
    for (y = 0; y < p; y++) cout << c[y] << " "; 
    cout << endl;
    return 0;
}



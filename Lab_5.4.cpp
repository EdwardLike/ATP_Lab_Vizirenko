#include <iostream>
using namespace std;

int MIX(int a[], int m, int b[], int n, int c[], int &p)
{
	int z, x, c;

	p = m + n;
    x = 0; c = p - 1;
	for (z = 0; z < m; z++)
		if (a[z] % 2 == 0)
		{
			c[x] = a[z];
			x++;
		}
		else
		{
			c[c] = a[z];
			c--;
		}
	for (z = 0; z < n; z++)
		if (b[z] % 2 == 0)
		{
			c[x] = b[z];
			x++;
		}
		else
		{
			c[c] = b[z];
			c--;
		}
	return p;
}

int main()
{
    int y, l, j[20], n, b[20], p, c[20];
    cout << "Specify the number of elements of array A: ";
    cin >> l;
	cout << "Enter the elements of the array A in the form of integers with a space: " << endl;
    for (y = 0; y < l; y++) cin >> j[y];
	cout << "Specify the number of elements of array B: ";
    cin >> n;
	cout << "Enter the elements of the array B in the form of integers with a space: " << endl;
    for (y = 0; y < n; y++) cin >> b[y];
	MIX(j, l, b, n, c, p);
	cout << endl;
    for (y = 0; y < p; y++) cout << c[y] << " "; 
    cout << endl;
    return 0;
}



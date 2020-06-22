#include <iostream>
using namespace std;

int main()
{
    int a, s, d, f[20][20], l, r;
    cout << "Specify the size of the square matrix: ";
    cin >> d;
	cout << "Enter the elements of the array in the form of integers with a space: " << endl;
    for (a = 0; a < d; a++)
		for (s = 0; s < d; s++) cin >> a[a][s];
	l = 0; r = 0;
	for (a = 0; a < d; a++) l = l + a[a][a];
	for (a = 0; a < d; a++) r = r + a[a][d-a-1];
	cout << "Sum of the left diagonal of the matrix: " << l << endl;
	cout << "The sum of the right diagonal of the matrix: " << r << endl;
    return 0;
}



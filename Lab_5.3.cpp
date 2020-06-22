#include <iostream>
using namespace std;

int main()
{
    int q, w, e, r, t[20];
    cout << "Specify the number of elements in the array: ";
    cin >> w;
	cout << "Enter the elements of the array in the form of integers with a space: " << endl;
    for (q = 0; q < w; q++) cin >> t[q];
	e = 2147483647;
	r = -2147483648; 
	for (q = 0; q < w; q++) 
	{
		if (e > t[q]) e = t[q];
		if (r < t[q]) r = t[q];
  	}
	cout << "The smallest value of an array element: " << e << endl;
	cout << "The largest value of an array element: " << r << endl;
    return 0;
}


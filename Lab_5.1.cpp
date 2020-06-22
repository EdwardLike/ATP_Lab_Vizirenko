#include <iostream>
using namespace std;

int main()
{
    int q, w, e, r[20];
	float v;
    cout << "Specify the number of elements in the array: ";
    cin >> w;
	cout << "Enter the elements of the array in the form of integers with a space: " << endl;
    for (q = 0; q < w; q++) cin >> r[q]; 
	e = 0; v = 0;
	for (q = 0; q < w; q++) e = e + r[q];
	if (w != 0) v = (float)e / w;
	cout << "Sum of array elements: " << e << endl;
	cout << "The average value of the elements of the array: " << v << endl;
    return 0;
}

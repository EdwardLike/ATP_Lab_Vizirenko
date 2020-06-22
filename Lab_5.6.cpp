#include <iostream>
using namespace std;

int main()
{
    int q, w, e, r, t[20][20], y[20][20], c[20][20];
    cout << "Specify the size of the square matrix: ";
    cin >> e >> r;
	cout << "Enter the elements of the first array in the form of integers through a space: " << endl;
    for (q = 0; q < e; q++)
		for (w = 0; w < r; w++) cin >> t[q][w];
	cout << "Enter the elements of the second array in the form of integers through a space: " << endl;
    for (q = 0; q < e; q++)
		for (w = 0; w < r; w++) cin >> y[q][w];
	for (q = 0; q < e; q++) 
		for (w = 0; w < r; w++) c[q][w] = t[q][w] + y[q][w];
 	for (q = 0; q < e; q++)
	{	
		cout << endl;
		for (w = 0; w < r; w++) cout << c[q][w] << " ";
	}	 
    return 0;
}


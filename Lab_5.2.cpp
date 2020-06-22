#include <iostream>
using namespace std;

int main()
{
    int g, e, r[20];
    cout << "Specify the number of elements in the array: ";
    cin >> e;
	cout << "Enter the elements of the array in the form of integers with a space: " << endl;
    for (g = 0; g < e; g++) cin >> r[g]; 
    for (g = 0; g < e / 2; g++) swap(r[g], r[e-g-1]); 
    cout << endl;
    for (g = 0; g < e; g++) cout << r[g] << " "; 
    cout << endl;
    return 0;
}

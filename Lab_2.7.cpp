#include <iostream>
using namespace std;
const int c = 20;
int main()
{
    int i, h, a[20], x = 0, y = 0, z = 0;
	cout << "Enter the number of elements: ";
    cin >> h;
    for (i = 0; i < h; i++) cin >> a[i];
	for (i = 0; i < h; i++)
		if (a[i] < 0)
			x++;
		else if (a[i] > 0)
			y++;
		else
			z++;
    cout << "Negative: " << x << " Positive: " << y << " Zeros: " << z << endl;
    return 0;
}

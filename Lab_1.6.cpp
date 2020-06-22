#include <iostream>
using namespace std;
int main()
{  setlocale(LC_ALL, "ru")
	int y, m, d;
	cout << "Ââåä³òü ê³ëüê³ñòü äí³â: ";
	cin >> d;
	y = d / 365;
	m = (d % 365) / 30;
	d = (d % 365) % 30;
	cout << "Ðîê³â: " << y << " Ì³ñÿö³â: " << m << " Äí³â: " << d << endl;
	return 0;
}

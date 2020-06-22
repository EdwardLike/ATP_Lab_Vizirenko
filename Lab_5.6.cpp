#include <iostream>
using namespace std;

int main()
{
    int o, h, f, u, a[20][20], b[20][20], c[20][20];
	setlocale(LC_ALL, "Rus");
    cout << "Задайте розмiр квадратної матрицi: ";
    cin >> f >> u;
	cout << "Введiть через пробiл елементи першого масиву у виглядi цiлих чисел: " << endl;
    for (o = 0; o < f; o++)
		for (h = 0; h < u; h++) cin >> a[o][h];
	cout << "Введiть через пробiл елементи другого масиву у виглядi цiлих чисел: " << endl;
    for (o = 0; o < f; o++)
		for (h = 0; h < u; h++) cin >> b[o][h];
	for (o = 0; o < f; o++) 
		for (h = 0; h < u; h++) c[o][h] = a[o][h] + b[o][h];
 	for (o = 0; o < f; o++)
	{	
		cout << endl;
		for (h = 0; h < u; h++) cout << c[o][h] << " ";
	}	 
    return 0;
}


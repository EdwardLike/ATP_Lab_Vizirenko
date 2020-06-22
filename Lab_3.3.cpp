#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{   setlocale(LC_ALL, "ru")
	int b;
	srand(time(NULL));
	int a = rand() % 100;
	cout << "Гра <<Вгадай число>>" << endl;
    cout << "Введи будь-яке число" << endl;
        while(b != a)
{       cin >> b;
        if(b > a)
            cout << "Більше" << endl; 
        else if(b < a)
            cout << "Меньше" << endl; 
        else if(b == a)
        	cout << "Ви вгадали число!" << endl;        
} 
        return 0;
}



#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{   setlocale(LC_ALL, "ru")
	int b;
	srand(time(NULL));
	int a = rand() % 100;
	cout << "��� <<������ �����>>" << endl;
    cout << "����� ����-��� �����" << endl;
        while(b != a)
{       cin >> b;
        if(b > a)
            cout << "������" << endl; 
        else if(b < a)
            cout << "������" << endl; 
        else if(b == a)
        	cout << "�� ������� �����!" << endl;        
} 
        return 0;
}



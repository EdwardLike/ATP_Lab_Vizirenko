#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{   
	int b;
	srand(time(NULL));
	int a = rand() % 100;
	cout << "Guess the number game" << endl;
    cout << "Enter any number" << endl;
        while(b != a)
{       cin >> b;
        if(b > a)
            cout << "More" << endl; 
        else if(b < a)
            cout << "Less" << endl; 
        else if(b == a)
        	cout << "You guessed the number!" << endl;        
} 
        return 0;
}



#include <iostream>
using namespace std;
int main()
{   setlocale(LC_ALL, "ru")
    int num;
    int sum = 0;
    cout << "Введіть ціле число для знаходження суми чисел: ";
    cin >> num;
    while (num != 0)
    {
        sum += num % 10; 
        num /= 10; 
    }
    cout << "Сума: " << sum << endl;
    return 0;
}

#include <iostream>

using namespace std;

int power_func (int a , int b);

int main()
{
    int number,power;

    cout << "enter number : ";
    cin >> number;
    cout << "enter power : ";
    cin >> power;
    cout << "result = " << power_func(number,power) << endl;
    return 0;
}

int power_func (int a , int b){
    int i = 1;
    int x = a;

    while ( i < b){
        a = a * x;
        i++;
    }
    return a;
}

#include <iostream>
using namespace std;

int factor (int x );
int factorial (int n );

int main()
{
    int number;

    cout << "enter number ";
    cin >> number;
    cout << "Factorial of " << number << " is " << factor(number) << endl;
    return 0;
}

int factor ( int x ){
     int fact = 1;
     int i;

    for (i = x; i > 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

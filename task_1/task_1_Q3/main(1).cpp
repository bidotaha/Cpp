#include <iostream>

using namespace std;

int main()
{
    unsigned int number = 0;
    unsigned int counter = 0;
    float result = 0;

    cout << "enter the number ";
    cin >> number;

    if (number > 99999)
    {
    cout << "ERROR !!";
    }
    else {
           for (counter = 0 ; counter < 5 ; counter++)
    {
        result = number % 10;
        number /= 10;
        cout << result;
    }
    }




    return 0;
}

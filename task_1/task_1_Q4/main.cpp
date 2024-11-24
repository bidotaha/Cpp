#include <iostream>

using namespace std;


int main()
{
    unsigned int year = 0;


    cout << "enter the year ";
    cin >> year;

    if ((year %4 == 0) && (0 != year %100) || (0 == year %400))
    {
        cout << "the year is a leab year" << endl;
    }
    else
    {
        cout << "the year isn't aleab year" << endl;
    }

    return 0;
}

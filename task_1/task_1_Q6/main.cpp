#include <iostream>

using namespace std;

int main()
{
    float x1,x2,x3,y1,y2,y3;

    cout << "enter the x1 : ";
    cin >> x1;
    cout << "enter the y1 : ";
    cin >> y1;
    cout << "enter the x2 : ";
    cin >> x2;
    cout << "enter the y2 : ";
    cin >> y2;
    cout << "enter the x3 : ";
    cin >> x3;
    cout << "enter the y3 : ";
    cin >> y3;

    if ((y3-y2)*(x3-x2) == (y2-y1)*(x2-x1))
    {
        cout << "the three points fall on one straight line" << endl;
    }
    else
    {
        cout << "the three points don't fall on one straight line" << endl;

    }




    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    float angle1,angle2,angle3;
    unsigned int sum = 0;

    cout << "enter the angle1 : ";
    cin >> angle1;
    cout << "enter the angle2 : ";
    cin >> angle2;
    cout << "enter the angle3 : ";
    cin >> angle3;

    sum = angle1 + angle2 + angle3;

    if (sum == 180)
    {
        cout << "the triangle is valid" << endl;
    }
    else
    {
        cout << "the triangle isn't valid" << endl;

    }




    return 0;
}

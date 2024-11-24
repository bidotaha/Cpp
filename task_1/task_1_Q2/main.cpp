#include <iostream>

using namespace std;

int main()
{
    float radius,lengh,width;
    float area1,perimeter1;
    float area2,perimeter2;
    const float pi = 3.14159;

    cout << "enter the radius of circle ";
    cin >> radius;
    cout << "enter the lengh of rectangle ";
    cin >> lengh;
    cout << "enter the width of rectangle ";
    cin >> width;

    area1 = pi * radius * radius;
    perimeter1 = 2 * pi * radius;
    area2 = lengh * width;
    perimeter2 = 2 * (lengh + width);

    cout << "the area of circle = " << area1 << endl;
    cout << "the perimeter of circle = " << perimeter1 << endl;
    cout << "the area of rectangle = " << area2 << endl;
    cout << "the perimeter of rectangle = " << perimeter2 << endl;

    return 0;
}

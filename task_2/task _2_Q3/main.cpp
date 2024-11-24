#include <iostream>

using namespace std;

float product(float num1, int num2);

int main() {
    float num1;
    int num2;

    cout << "Enter a float number: ";
    cin >> num1;
    cout << "Enter an integer number: ";
    cin >> num2;

    float result = product(num1, num2);
    cout << "Product: " << result << endl;

    return 0;
}

float product(float num1, int num2) {
    return num1 * num2;
}

#include <iostream>
using namespace std;

void calculateSumAndAverage(int numbers[], int size);

int main() {
    const int SIZE = 10;
    int numbers[SIZE];

    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    calculateSumAndAverage(numbers, SIZE);

    return 0;
}

void calculateSumAndAverage(int numbers[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
    }
    float average = (sum) / size;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
}

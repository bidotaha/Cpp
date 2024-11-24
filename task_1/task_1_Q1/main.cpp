#include <iostream>

using namespace std;

int main()
{

    float subjuct1,subjuct2,subjuct3,subjuct4,subjuct5;
    float sum;
    float average;
    float percentage;

        cout << "enter subject 1: ";
        cin >> subjuct1;
        cout << "enter subject 2: ";
        cin >> subjuct2;
        cout << "enter subject 3: ";
        cin >> subjuct3;
        cout << "enter subject 4: ";
        cin >> subjuct4;
        cout << "enter subject 5: ";
        cin >> subjuct5;

        if (subjuct1 > 100 || subjuct2 > 100 || subjuct3 > 100 || subjuct4 > 100 || subjuct5 > 100){
            cout << "ERROR !!" << endl;
        }
        else {
            sum = (subjuct1 + subjuct2 + subjuct3 + subjuct4 + subjuct5);
            average = (sum)/5;
            percentage = ((sum)/500) * 100;
            cout << "AVERAGE = " << average << "\tPERCANTGE =" << percentage << endl;
        }

    return 0;
}

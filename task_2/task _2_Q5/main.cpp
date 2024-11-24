#include <iostream>
using namespace std;

int factorial(int n);
int prime (int number);
int even_or_odd (int number);

int main()
{
    int choice;

        cout << "welcome \n";
        while (1){
        cout <<"\n";
        cout <<"===============================\n";
        cout <<" 1) Find the factorial of a number \n";
        cout <<" 2) Check a number is prime or not \n";
        cout <<" 3) Check a number is Odd or even \n";
        cout <<" 4) exit from application \n";
        cout <<"===============================\n";

        cout <<"enter choice ";
        cin >>choice;

        switch(choice){
           case 1:
                int number_1;
                cout << "enter number to calculate factorial : ";
                cin >> number_1;
                cout << "Factorial of " << number_1 << " is " << factorial(number_1) << endl;
           break;
           case 2:
                int number_2;

                cout <<"enter a number to it's a prime number or not : ";
                cin >> number_2;
                if (prime(number_2) == 0){
                    cout << "number isn't prime ";
                }
                else {
                    cout << "number is prime ";
                }
           break;
           case 3:
                int number_3;

                cout <<"enter a number to know even or odd : ";
                cin >> number_3;
                if (even_or_odd(number_3) == 1){
                cout << "number is even ";
                }
                else {
                cout << "number is odd ";
                }
           break;
           case 4:
               cout <<"exit from application \n";
               exit(1);
           break;
           default:
               cout <<"ERROR !! out of range \n";
           break;
        }
    }
}

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int prime (int number){
    int i,flag = 1;


    for ( i=2 ; i <= number/2 ; i++ ){
        if (number %i == 0){
            flag = 0;
            break;
        }
    }
    if (flag == 0){
        return 0;
    }
    else {
        return 1;
    }
}

int even_or_odd (int number){
    if (number %2 == 0){
        return 1;
    }
    else {
        return 0;
    }
}

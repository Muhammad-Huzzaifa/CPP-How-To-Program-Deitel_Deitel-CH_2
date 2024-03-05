// (Digits of an Integer)
#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a four digit number: "; // Prompt the user to enter a number.
    int number{0};                         // Daclaring the number and initializes it to zero.
    cin >> number;                         // Read the number from the keyboard.

    int number1{0}, number2{0}, number3{0}, number4{0};
    // number1
    number1 = number % 10;
    number /= 10;
    // number2
    number2 = number % 10;
    number /= 10;
    // number3
    number3 = number % 10;
    number /= 10;
    // number4
    number4 = number % 10;

    cout << number1 << ' ' << number2 << ' ' << number3 << ' ' << number4 << endl;

    system("pause");
    return 0;
}
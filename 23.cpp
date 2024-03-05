// (Largest and Smallest Integers)
#include <iostream>

using namespace std;

int main()
{
    cout << "Enter five integer numbers: ";                         // Prompt the user to enter five numbers.
    int number1{0}, number2{0}, number3{0}, number4{0}, number5{0}; // Declaring five numbers and initializes it to 0.
    cin >> number1 >> number2 >> number3 >> number4 >> number5;     // Input five integer numbers.

    // Large number
    cout << "Large = ";
    int large{number1};
    if (number2 > large)
        large = number2;
    if (number3 > large)
        large = number3;
    if (number4 > large)
        large = number4;
    if (number5 > large)
        large = number5;
    cout << large << endl;

    // Small number
    cout << "Small = ";
    int small{number1};
    if (number2 < small)
        small = number2;
    if (number3 < small)
        small = number3;
    if (number4 < small)
        small = number4;
    if (number5 < small)
        small = number5;
    cout << small << endl;

    system("pause");
    return 0;
}
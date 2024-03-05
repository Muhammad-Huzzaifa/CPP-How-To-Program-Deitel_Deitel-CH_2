// (Comparing Integers)
#include <iostream>

using namespace std;

int main()
{
    cout << "Enter two numbers: "; // Prompt the user to enter two numbers.
    int number1{0}, number2{0};    // Declaring and intializing number 1 and number 2 to 0.
    cin >> number1 >> number2;     // Entering numbers from the keyboard.

    // If else conditions to find larger number.
    if (number1 > number2)
        cout << number1 << " is larger" << endl;
    else if (number2 > number1)
        cout << number2 << " is larger" << endl;
    else
        cout << "These numbers are equal" << endl;

    system("pause");
    return 0;
}
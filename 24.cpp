// (Odd or Even)
#include <iostream>

using namespace std;

int main()
{
    cout << "Enter two numbers: "; // Prompt the user to enter two numbers.
    int number1{0}, number2{0};    // Declaring and intializing number 1 and number 2 to 0.
    cin >> number1 >> number2;     // Entering numbers from the keyboard.

    // For number 1
    if (number1 % 2 != 0)
        cout << "Number1 is an odd number." << endl;
    else
        cout << "Number1 is not an odd number." << endl;

    // For number2
    if (number2 % 2 != 0)
        cout << "Number2 is an odd number." << endl;
    else
        cout << "Number2 is not an odd number." << endl;

    // For number1 + number2
    if ((number1 + number2) % 2 != 0)
        cout << "Number1 + Number2 is an odd number." << endl;
    else
        cout << "Number1 + Number2 is not an odd number." << endl;

    system("pause");
    return 0;
}
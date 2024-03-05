// (Arithmetic)
#include <iostream>

using namespace std;

int main()
{
    cout << "Enter two numbers: "; // Prompt the user to enter two numbers.
    int number1{0}, number2{0};    // Declaring and intializing number 1 and number 2 to 0.
    cin >> number1 >> number2;     // Entering numbers from the keyboard.

    // Sum
    cout << "Sum = " << number1 + number2 << endl;
    // Product
    cout << "Product = " << number1 * number2 << endl;
    // Difference
    cout << "Difference = " << number1 - number2 << endl;
    // Quotient
    cout << "Quotient = " << number1 / number2 << endl;

    system("pause");
    return 0;
}
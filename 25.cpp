// (Factors)
#include <iostream>

using namespace std;

int main()
{
    cout << "Input three different integers: "; // Prompt the user to enter two numbers.
    int number1{0}, number2{0}, number3{0};     // Declaring and intializing numbers to 0.
    cin >> number1 >> number2 >> number3;       // Entering numbers from the keyboard.

    // Chacking for number1
    if (number3 % number1 == 0)
        cout << "Number1 is a factor of Number3." << endl;
    else
        cout << "Number1 is not a factor of Number3." << endl;
    
    // Checking for number2
    if (number3 % number2 == 0)
        cout << "Number2 is a factor of Number3." << endl;
    else
        cout << "Number2 is not a factor of Number3." << endl;

    system("pause");
    return 0;
}
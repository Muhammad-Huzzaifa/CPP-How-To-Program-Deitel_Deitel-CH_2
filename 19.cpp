// (Arithmetic, Smallest and Largest)
#include <iostream>

using namespace std;

int main()
{
    cout << "Input three different integers: "; // Prompt the user to enter two numbers.
    int number1{0}, number2{0}, number3{0};     // Declaring and intializing numbers to 0.
    cin >> number1 >> number2 >> number3;       // Entering numbers from the keyboard.

    // Sum
    cout << "Sum is " << number1 + number2 + number3 << endl;
    // Average
    cout << "Average is " << (number1 + number2 + number3) / 3 << endl;
    // Product
    cout << "Product is " << number1 * number2 * number3 << endl;
    // Smallest
    cout << "Smallest is ";
    if (number1 < number2 && number1 < number3)
        cout << number1;
    else if (number2 < number1 && number2 < number3)
        cout << number2;
    else
        cout << number3;
    cout << endl;
    // Largest
    cout << "Largest is ";
    if (number1 > number2 && number1 > number3)
        cout << number1;
    else if (number2 > number1 && number2 > number3)
        cout << number2;
    else
        cout << number3;
    cout << endl;
    
    system("pause");
    return 0;
}
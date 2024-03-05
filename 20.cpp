// (Diameter, Circumference and Area of a Circle)
#include <iostream>

using namespace std;

int main()
{
    const double PI{3.14159}; // Declare a constant float number called PI with a value of 3.14159

    cout << "Enter the radius of the circle: "; // Prompt the user to enter radius of a circle.
    int radius{0};                              // Declare an integer variable called radius to store the radius of the circle.
    cin >> radius;                              // Read in the user's input for the radius of the circle.

    // Diameter
    cout << "Diameter = " << 2 * radius << endl; //  Calculate and print out the diameter of the circle using the formula: diameter = 2 * radius.
    // Circumfrance
    cout << "Circumfrance = " << 2 * PI * radius << endl; // Calculate and print the circumfrance of the circle using the formula: circumfrance = 2 * PI * radius.
    // Area
    cout << "Area = " << PI * radius * radius << endl; // Calculate and print out the area of the circle using the formula: area = PI * radius * radius.

    system("pause");
    return 0;
}
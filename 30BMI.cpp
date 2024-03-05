// (Body Mass Index Calculator)
#include <iostream>

using namespace std;

int main()
{
    // Prompting and initializing variables from the keyboard.
    cout << "Enter your weight in kilograms(integer): ";
    int kilograms{0}, height{0};
    cin >> kilograms;
    cout << "Enter your height in meters(integer): ";
    cin >> height;

    // Calculating BMI and diplaying on the conasole.
    int BMI{kilograms / (height * height)};
    cout << "BMI = " << BMI << endl;

    // Check for body condition and display the output accordingly.
    if (BMI < 18.5)
    {
        cout << "You are underweight.\n";
    }
    else if (BMI <= 24.9)
    {
        cout << "You have a normal weight.\n";
    }
    else if (BMI <= 29.9)
    {
        cout << "You are overweight.\n";
    }
    else
    {
        cout << "You are obese.\n";
    }

    system("pause");
    return 0;
}
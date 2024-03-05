// (Car-Pool Savings Calculator)
#include <iostream>

using namespace std;

int main()
{
    // Promting and initializing variables for calculation of cost.
    cout << "Enter total number of miles you drive in one day (integer): ";
    int miles{0}, costPerGallon{0}, avgMilesPerGallon{0}, parkingFees{0}, totalCost{0};
    cin >> miles; //  Read miles from the keyboard.

    // Promting user to enter  price per gallon.
    cout << "Enter the cost of one gallon of gasoline (integer): ";
    cin >> costPerGallon; // Read cost from the keyboard.

    // Promting user to give average miles per gallon driven.
    cout << "Enter average number of miles your car drive in one gallon (integer): ";
    cin >> avgMilesPerGallon; // Read average number of miles from the keyboard.

    // Promting user to enter the parking fees.
    cout << "Enter the parking fees per day of your car (integer): ";
    cin >> parkingFees; // Read parking fees from the keyboard.

    // Calculations for the total cost.
    totalCost = parkingFees + (costPerGallon * (miles / avgMilesPerGallon));

    // Displaying the total cost.
    cout << "\nThe estimated cost to fill up your car for " << miles
         << " miles is: $" << totalCost
         << endl;

    system("pause");
    return 0;
}
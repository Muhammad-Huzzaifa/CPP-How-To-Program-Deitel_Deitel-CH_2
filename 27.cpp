// (Integer Equivalent of a Character)
#include <iostream>

using namespace std;

int main()
{
    cout << "Enter any character: "; // Prompt the user to enter character.
    char character{'\0'};            // Declaring character of type char and intializes it to null.
    cin >> character;                // Read the character from the keyboard.

    // Type casting
    int number = static_cast<int>(character);
    cout << "The integer equivalent of '" << character << "' is: " << number << endl;

    system("pause");
    return 0;
}
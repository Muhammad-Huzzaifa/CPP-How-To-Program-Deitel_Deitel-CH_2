/*
(Order of Evaluation)
a) x = 3 + 3 * 4 / 2 - 2;
b) x = 4 % 2 + 2 * 4 - 2 / 2;
c) x = ( 2 * 4 * 2 + ( 9 * 3 / 3 ) );
*/
#include <iostream>

using namespace std;

int main()
{
    int x{0}; // Declare the variable x and initializes it to 0.

    // (a)
    x = 3 + 3 * 4 / 2 - 2; // 3 * 4 -> 12 / 2 -> 3 + 6 -> 9 - 2 = 7
    cout << "3 + 3 * 4 / 2 - 2 = " << x << endl;

    // (b)
    x = 4 % 2 + 2 * 4 - 2 / 2; // 4 % 2 -> 2 * 4 -> 2 / 2 -> 0 + 8 - 1 = 7
    cout << "4 % 2 + 2 * 4 - 2 / 2 = " << x << endl;

    // (c)
    x = (2 * 4 * 2 + (9 * 3 / 3)); // 9 * 3 -> 27 / 3 -> 2 * 4 -> 8 * 2 -> 16 + 9 = 25
    cout << "(2 * 4 * 2 + (9 * 3 / 3)) = " << x << endl;

    system("pause");
    return 0;
}
/*
(Printing) "VX YZ"
a) Using one statement with two stream insertion operators.
b) Using one statement with four stream insertion operator.
c) Using two statements with one stream insertion operator each.
*/
#include <iostream>

using namespace std;

int main()
{
    // (a)
    cout << "VX "
         << "YZ";
    cout << endl;

    // (b)
    cout << "V"
         << "X "
         << "Y"
         << "Z";
    cout << endl;

    // (c)
    cout << "VX ";
    cout << "YZ";
    cout << endl;

    system("pause");
    return 0;
}
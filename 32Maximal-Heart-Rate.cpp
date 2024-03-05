// (Maximal Heart Rate Calculator)
#include <iostream>

using namespace std;

int main()
{
    // Promting, intializing, and read the age from the keyboard.
    cout << "Enter your age: ";
    int age{0};
    cin >> age;

    // Calculate MHR using different formulas.
    int mhr_common = 220 - age;
    int mhr_tanaka = 208 - 0.7 * age;
    int mhr_gellish = 207 - 0.7 * age;
    int mhr_nes = 211 - 0.64 * age;

    // Calculating Smallest MHR.
    int mhr_smaller{mhr_common};
    if (mhr_tanaka < mhr_smaller)
        mhr_smaller = mhr_tanaka;
    if (mhr_gellish < mhr_smaller)
        mhr_smaller = mhr_gellish;
    if (mhr_nes < mhr_smaller)
        mhr_smaller = mhr_nes;

    // Calculating Largest MHR.
    int mhr_larger{mhr_common};
    if (mhr_tanaka > mhr_larger)
        mhr_larger = mhr_tanaka;
    if (mhr_gellish > mhr_larger)
        mhr_larger = mhr_gellish;
    if (mhr_nes > mhr_larger)
        mhr_larger = mhr_nes;

    // Displaying results on screen.
    cout << "MHR By Commonly Used Formula: " << mhr_common;
    cout << ", MHR By Tanaka Formula: " << mhr_tanaka;
    cout << ", MHR By Gellish Formula: " << mhr_gellish;
    cout << ", MHR By Nes Bitton formula: " << mhr_nes << endl;

    // Diplaying the range.
    cout << "You consider the range between " << mhr_smaller << " to " << mhr_larger << " as your MHR." << endl;

    system("pause");
    return 0;
}
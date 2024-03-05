// (Table)
#include <iostream>

using namespace std;

int main()
{
    // Length, Surface area = 6 * Length ^ 2, Volume = Length * Length * Length.
    cout << "Face_length\tSurface_area\tVolume\nof_cube(cm)\tof_cube(cm^2)\tof_cube(cm^3)\n";
    cout << 0 << "\t\t" << 6 * 0 * 0 << "\t\t" << 0 * 0 * 0 << endl;
    cout << 1 << "\t\t" << 6 * 1 * 1 << "\t\t" << 1 * 1 * 1 << endl;
    cout << 2 << "\t\t" << 6 * 2 * 2 << "\t\t" << 2 * 2 * 2 << endl;
    cout << 3 << "\t\t" << 6 * 3 * 3 << "\t\t" << 3 * 3 * 3 << endl;
    cout << 4 << "\t\t" << 6 * 4 * 4 << "\t\t" << 4 * 4 * 4 << endl;

    system("pause");
    return 0;
}
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    // Variables for height and radius for the formula
    double height;
    double radius;
    // Variable for PI and cannot be changed
    const double PI = 3.14159;

    // Ask the user for the height
    cout << "Enter the height of the cylinder: ";
    // User inputs number and saved in variable height
    cin >> height;
    cout << endl;

    // Ask the user for the radius
    cout << "Enter the radius of the base of the cylinder: ";
    // User inputs number and saved in variable radius
    cin >> radius;
    cout << endl;

    // Output the results for volume of the cylinder
    cout << "Volume of the cylinder = "
         << setprecision(2)
         << PI * pow(radius, 2.0) * height
         << endl;

    // Output the results for surface area
    cout << "Surface area = "
         << setprecision(2)
         << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0)
         << endl;


    return 0;
}

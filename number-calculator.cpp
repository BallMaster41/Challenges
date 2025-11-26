#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{        
    double x;

    // Detect if the input is a letter/character
    while (true) {

        cout << "Enter a number: \n";
        cin >> x;

        if (cin.fail()) {
            cerr << "Invalid input\n";
            cin.clear();
            cin.ignore(100000, '\n');
            continue;
        }

        break;
    }

    //Calculations
    cout << "Negation: " << -x << "\n";
    cout << "Absolute value: " << fabs(x) << "\n";
    cout << "Square: " << x * x << "\n";
    cout << "Cube: " << x * x * x << "\n";

    if (x >= 0) {
        cout << "Square root: " << sqrt(x) << "\n";
    }

    else {
        cout << "Square root: undefined\n";
    }

    cout << "Floor: " << floor(x) << "\n";
    cout << "Ceiling: " << ceil(x) << "\n";
    cout << "Rounded: " << round(x) << "\n";

}
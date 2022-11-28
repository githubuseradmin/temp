#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    cout << "Enter the number: ";
    cin >> x;
    if (x >= 0)
    {
        x = sin(x);
        cout << "The number >= 0, x = sin(z)" << "\n";
    }
    else
    {
        cout << "The number < 0, x = z" << "\n";
    }
    cout << 2.0/3.0 * pow(sin(x), 2) - 3.0/4.0 * pow(cos(x), 2) << "\n";
    system("pause");
    return 0;
}
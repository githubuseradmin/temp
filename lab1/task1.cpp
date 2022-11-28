#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    cout << "Enter the number: ";
    cin >> x;
    double z1, z2;
    z1 = cos(x) + cos(2*x) + cos(6*x) + cos(7*x);
    z2 = 4*cos(x/2.0) * cos(5.0/2.0*x) * cos(4*x);
    cout << "z1: " << z1 << " z2: " << z2 << "\n";
    system("pause");
    return 0;
}
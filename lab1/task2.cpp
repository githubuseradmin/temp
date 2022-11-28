#include <iostream>
#include <cmath>

using namespace std;

double sqrtr(double number);
double divide(double first, double second);

int main()
{
    double x;
    cout << "Enter the number: ";
    if (!(cin >> x))
    {
        cout << "It's not a number, try again\n";
        system("pause");
        return 0;
    }
    double z1, z2;
    try
    {
        z1 = divide(sqrtr(pow(3*x+2, 2) - 24*x), 3*sqrtr(x) - divide(2, sqrtr(x)));
        z2 -= sqrtr(x);
    }
    catch(const exception& e)
    {
        cerr << "Error: " << e.what() << '\n';
        system("pause");
        return 0;
    } 
    cout << "z1: " << z1 << " z2: " << z2 << "\n";
    system("pause");
    return 0;
}

double sqrtr(double number)
{
    if (number < 0)
    {
        throw(invalid_argument("You cant sqrt a negative number"));
    }
    return sqrt(number);
}

double divide(double first, double second)
{
    if (second == 0)
    {
        throw(invalid_argument("You cant divide by zero"));
    }
    return first/second;
}
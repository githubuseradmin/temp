#include <iostream>
#include <cmath>

using namespace std;

double sqrtr(double number);
double divide(double first, double second);

int main()
{
    double x, y, z;
    cout << "Enter x: ";
    if (!(cin >> x))
    {
        cout << "It's not a number, try again\n";
        system("pause");
        return 0;
    }
    cout << "Enter y: ";
    if (!(cin >> y))
    {
        cout << "It's not a number, try again\n";
        system("pause");
        return 0;
    }
    cout << "Enter z: ";
    if (!(cin >> z))
    {
        cout << "It's not a number, try again\n";
        system("pause");
        return 0;
    }
    double b;
    try
    {
        if (z < -1 || z > 1)
        {
            throw(invalid_argument("Arcsin cant take this values (< -1 or > 1)"));
        }
        b = sqrtr(10*(cbrt(x)+pow(x, y+2))) * (pow(asin(z), 2)-abs(x-y));
    }
    catch(const exception& e)
    {
        cerr << "Error: " << e.what() << '\n';
        system("pause");
        return 0;
    } 
    if (isnan(b))
    {
        cout << "Error\n";
        system("pause");
        return 0;
    }
    cout << "Beta: " << b << "\n";
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
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int f;
    double x, b;
    cout << "Choose the function: 1) 2*x 2) x^2 3) x/3: ";
    if (!(cin >> f))
    {
        cout << "Try again\n";
        system("pause");
        return 0;
    }
    if (f < 1 || f > 3)
    {
        cout << "Choose from 1 to 3, try again\n";
        system("pause");
        return 0;
    }
    cout << "Enter x: ";
    if (!(cin >> x))
    {
        cout << "It's not a number, try again\n";
        system("pause");
        return 0;
    }
    cout << "Enter b: ";
    if (!(cin >> b))
    {
        cout << "It's not a number, try again\n";
        system("pause");
        return 0;
    }
    double result;
    try
    {
        if (x < -1 || x > 1)
        {
            throw(invalid_argument("Arcsin cant take this values (< -1 or > 1)"));
        }
        double f_result;
        switch(f)
        {
            case 1: f_result = 2 * x;
            case 2: f_result = pow(x, 2);
            case 3: f_result = x/3.0;
        }
        result = 2.0/3.0 * pow(asin(x), 2) - (3*b)/4.0 * pow(cos(f_result), 2);
    }
    catch(const exception& e)
    {
        cerr << "Error: " << e.what() << '\n';
        system("pause");
        return 0;
    } 
    if (isnan(x))
    {
        cout << "Error\n";
        system("pause");
        return 0;
    }
    cout << result << "\n";
    system("pause");
    return 0;
}
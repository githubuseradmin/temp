#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, h;
    double s = 0, y = 0;
    int n;
    cout << "Enter a: ";
    if (!(cin >> a))
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
    cout << "Enter h: ";
    if (!(cin >> h))
    {
        cout << "It's not a number, try again\n";
        system("pause");
        return 0;
    }
    cout << "Enter n: ";
    if (!(cin >> n))
    {
        cout << "It's not a number, try again\n";
        system("pause");
        return 0;
    }
    for (double i = a; i <= b; i += h)
    {
        for (int k = 0; k <= n; k++)
        {
            int fact = 1;
            for (int j = 1; j <= k; j++)
            {
                fact = fact * j;
            }
            s += ((2 * k + 1)/fact) * pow(i, 2*k);
            y += (1 + 2 * pow(i, 2)) * pow(exp(1), pow(i, 2));
        }
    }
    cout << "S: " << s << "\nY: " << y << "\n|Y-S| = " << abs(y - s) << "\n";
    system("pause");
    return 0;
}
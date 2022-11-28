#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

double min_n(const vector <double> & numbers, int n);
double max_n(const vector <double> & numbers, int n);

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
    double result;
    try
    {
        result = min_n({y, z}, 2)/max_n({min_n({x, y}, 2), 
        min_n({y, z}, 2)}, 2);
    }
    catch(const exception& e)
    {
        cerr << "Error: " << e.what() << '\n';
        system("pause");
        return 0;
    } 
    cout << result << "\n";
    system("pause");
    return 0;
}

double min_n(const vector <double> & numbers, int n)
{
    double min_number;
    min_number = numbers[0];
    for(int i = 1; i < n; i++)
    {
        if(min_number > numbers[i])
        {
            min_number = numbers[i];
        }
    }

    return min_number;
}

double max_n(const vector <double> & numbers, int n)
{
    double max_number;
    max_number = numbers[0];
    for(int i = 1; i < n; i++)
    {
        if(max_number < numbers[i])
        {
            max_number = numbers[i];
        }
    }

    return max_number;
}
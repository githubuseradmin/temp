#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    double result;
    char choice;
    cout << "Enter array length: ";
    if (!(cin >> n))
    {
        cout << "It's not a number, try again\n";
        system("pause");
        return 0;
    }
    double arr[n];
    while (true)
    {
        cout << "Random ? (Y or N)\n";
        cin >> choice;
        if (choice == 'Y' || choice == 'y' || choice == 'N' || choice == 'n') break;
    }
    if (choice == 'Y' || choice == 'y')
    {
        RAND_MAX == 1000;
        for (int i = 0; i < n; i++)
        {
            arr[i] == rand() + 1;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            double temp;
            cout << "Enter element of array number " << i + 1 << ": ";
            cin >> arr[i];
        }
    }
    int a = -1, b = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            a = i;
        }
    }
    for (int i = a + 1; i < n; i++)
    {
        if (arr[i] < 0)
        {
            b = i;
        }
    }
    if (a == -1 || b == -1)
    {
        cout << "Task cant be solved\n";
        system("pause");
        return 0;
    }
    for (int i = a + 1; i < b; i++)
    {
        int temp = (int) arr[i];
        result += arr[i] - temp;
    }
    cout << result << "\n";
    system("pause");
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if (a < b)
    {
        cout << "Smallest = " << a;
    }
    else if (b < a)
    {
        cout << "Smallest = " << b;
    }
    else
    {
        cout << "Both numbers are equal";
    }

    return 0;
}
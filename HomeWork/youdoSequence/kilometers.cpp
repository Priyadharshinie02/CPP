#include <iostream>
using namespace std;

int main()
{
    float km, miles;

    cout << "Enter distance in kilometers: ";
    cin >> km;

    if (km >= 0 && km <= 10000)
    {
        miles = km * 0.621371;
        cout << "Miles: " << miles;
    }
    else
    {
        cout << "Invalid input";
    }

    return 0;
}
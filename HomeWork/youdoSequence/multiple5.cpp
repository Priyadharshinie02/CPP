#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 5 == 0)
    {
        cout << "Multiple of 5";
    }
    else
    {
        cout << "Not a multiple of 5";
    }

    return 0;
}
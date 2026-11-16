#include <iostream>
using namespace std;

int main()
{
    int n = 4826;

    cout << "Even = " << (n % 2 == 0) << endl;

    cout << "Multiple of 5 = " << (n % 5 == 0) << endl;

    cout << "Last digit greater than 5 = " << (n % 10 > 5);

    return 0;
}
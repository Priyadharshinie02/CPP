
#include <iostream>
using namespace std;

// Function declaration
int sumDigits(int number);

int main()
{
    int n;
    cin >> n;

    int result = sumDigits(n);

    cout << result;

    return 0;
}

// Function definition
int sumDigits(int number)
{
    int sum = 0;

    while(number > 0)
    {
        int digit = number % 10;

        sum = sum + digit;

        number = number / 10;
    }

    return sum;
}

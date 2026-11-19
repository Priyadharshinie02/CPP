
#include <iostream>
using namespace std;

// Function declaration
bool isPrime(int number);

int main()
{
    int n;
    cin >> n;

    if(isPrime(n))
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not prime";
    }

    return 0;
}

// Function definition
bool isPrime(int number)
{
    if(number <= 1)
    {
        return false;
    }

    for(int i = 2; i * i <= number; i++)
    {
        if(number % i == 0)
        {
            return false;
        }
    }

    return true;
}

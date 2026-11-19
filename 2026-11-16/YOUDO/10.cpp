
#include <iostream>
using namespace std;

// Function declaration
int totalSavings(int days);

int main()
{
    int days;

    cin >> days;

    int result = totalSavings(days);

    cout << result << " rupees";

    return 0;
}

// Function definition
int totalSavings(int days)
{
    int total = 0;

    for(int i = 1; i <= days; i++)
    {
        total = total + (5 * i);
    }

    return total;
}

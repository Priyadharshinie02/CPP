
#include <iostream>
using namespace std;

// Function declaration
int countDigits(int ticket);

int main()
{
    int ticket;

    cin >> ticket;

    int result = countDigits(ticket);

    cout << result;

    return 0;
}

// Function definition
int countDigits(int ticket)
{
    int count = 0;

    if(ticket == 0)
    {
        return 1;
    }

    while(ticket > 0)
    {
        ticket = ticket / 10;

        count++;
    }

    return count;
}

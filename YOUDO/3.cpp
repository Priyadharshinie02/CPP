
#include <iostream>
using namespace std;

// Function declaration
int payableAmount(int bill);

int main()
{
    int bill;

    cin >> bill;

    cout << payableAmount(bill);

    return 0;
}

// Function definition
int payableAmount(int bill)
{
    if (bill >= 500)
    {
        int discount = 50;

        bill = bill - discount;
    }

    return bill;
}

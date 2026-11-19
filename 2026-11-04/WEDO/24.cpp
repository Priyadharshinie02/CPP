#include <iostream>
using namespace std;

int main()
{
    int total = 900;

    int years = total / 365;
    int rest = total % 365;

    int months = rest / 30;
    int days = rest % 30;

    cout << "Years = " << years << endl;
    cout << "Months = " << months << endl;
    cout << "Days = " << days;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int days = 1200;

    int years = days / 365;
    int remaining = days % 365;

    int months = remaining / 30;
    int finalDays = remaining % 30;

    cout << "Years = " << years << endl;
    cout << "Months = " << months << endl;
    cout << "Days = " << finalDays;

    return 0;
}
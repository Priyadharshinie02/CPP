#include <iostream>
using namespace std;

int main()
{
    int total = 135;

    int hours = total / 60;
    int minutes = total % 60;

    cout << "Hours = " << hours << endl;
    cout << "Minutes = " << minutes;

    return 0;
}
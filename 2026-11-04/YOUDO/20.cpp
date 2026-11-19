#include <iostream>
using namespace std;

int main() {
    int seconds = 5000;

    int hours = seconds / 3600;
    int remaining = seconds % 3600;

    int minutes = remaining / 60;
    int finalSeconds = remaining % 60;

    cout << "Hours = " << hours << endl;
    cout << "Minutes = " << minutes << endl;
    cout << "Seconds = " << finalSeconds;

    return 0;
}
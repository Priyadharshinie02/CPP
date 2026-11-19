#include <iostream>
using namespace std;

int main() {
    int minutes = 200;

    int hours = minutes / 60;
    int remaining = minutes % 60;

    cout << "Hours = " << hours << endl;
    cout << "Minutes = " << remaining;

    return 0;
}
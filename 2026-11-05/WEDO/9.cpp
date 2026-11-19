#include <iostream>
using namespace std;

int main() {
    int fee = 100;
    int rate = 40;
    int hours = 3;

    int total = fee + rate * hours;

    cout << "Total charge = " << total;

    return 0;
}
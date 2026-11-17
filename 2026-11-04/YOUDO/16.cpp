#include <iostream>
using namespace std;

int main() {
    int adultPrice = 120;
    int childPrice = 60;

    int adults = 4;
    int children = 3;

    int total = (adultPrice * adults) + (childPrice * children);

    cout << "Total amount = " << total;

    return 0;
}
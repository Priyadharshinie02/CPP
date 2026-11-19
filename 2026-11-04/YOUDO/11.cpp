#include <iostream>
using namespace std;

int main() {
    int fixedCharge = 30;
    int perKm = 9;
    int distance = 18;

    int fare = fixedCharge + (perKm * distance);

    cout << "Total fare = " << fare;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int fixed = 50;
    int rate = 12;
    int km = 15;

    int fare = fixed + rate * km;

    cout << "Cab fare = " << fare;

    return 0;
}
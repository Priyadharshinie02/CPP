#include <iostream>
using namespace std;

int main() {
    int students = 1430;
    int capacity = 50;

    int buses = students / capacity;
    int remaining = students % capacity;

    cout << "Full buses = " << buses << endl;
    cout << "Students left = " << remaining;

    return 0;
}
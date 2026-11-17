#include <iostream>
using namespace std;

int main() {
    int marks = 88;
    int attendance = 72;

    bool eligible = marks > 85 || attendance > 90;

    cout << "Scholarship eligible = " << eligible;

    return 0;
}
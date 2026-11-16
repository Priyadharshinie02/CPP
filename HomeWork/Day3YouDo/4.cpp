#include <iostream>
using namespace std;

int main() {
    int students = 85;
    int teamSize = 6;

    int fullTeams = students / teamSize;
    int remaining = students % teamSize;

    cout << "Full teams = " << fullTeams << endl;
    cout << "Students left = " << remaining;

    return 0;
}
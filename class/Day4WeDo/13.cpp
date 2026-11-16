#include <iostream>
using namespace std;

int main() {
    int c = 37;

    int f1 = c * 9 / 5 + 32;
    double f2 = c * 9.0 / 5 + 32;

    cout << "Using int = " << f1 << endl;
    cout << "Using double = " << f2;

    return 0;
}
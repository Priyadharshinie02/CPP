#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    if (n >= -1000000 && n <= 1000000) {
        if (n % 5 == 0) {
            cout << "Multiple of 5";
        }
        else {
            cout << "Not a multiple of 5";
        }
    }
    else {
        cout << "Invalid input";
    }

    return 0;
}
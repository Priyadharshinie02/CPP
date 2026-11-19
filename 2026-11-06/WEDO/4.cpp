#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    if (n >= 0 && n <= 100000) {
        int lastDigit = n % 10;

        cout << "Last Digit: " << lastDigit;
    }
    else {
        cout << "Invalid input";
    }

    return 0;
}
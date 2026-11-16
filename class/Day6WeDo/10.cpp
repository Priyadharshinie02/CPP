#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n < 0) {
        n = -n;
    }

    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    cout << "Sum of digits: " << sum;

    return 0;
}
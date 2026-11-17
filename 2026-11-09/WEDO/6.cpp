#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 0 && n <= 20) {
        long long fact = 1;

        for (int i = 1; i <= n; i++) {
            fact = fact * i;
        }

        cout << "Factorial of " << n << " is " << fact;
    }
    else {
        cout << "Invalid input";
    }

    return 0;
}
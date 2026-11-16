#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 1 && n <= 1000000) {
        long long sum = 0;

        for (int i = 1; i <= n; i++) {
            sum = sum + i;
        }

        cout << "Sum: " << sum;
    }
    else {
        cout << "Invalid input";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 1 && n <= 50) {
        long long a = 0, b = 1, c;

        for (int i = 1; i <= n; i++) {
            cout << a << " ";

            c = a + b;
            a = b;
            b = c;
        }
    }
    else {
        cout << "Invalid input";
    }

    return 0;
}
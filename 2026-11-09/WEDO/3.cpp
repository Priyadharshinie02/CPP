#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 1 && n <= 1000000) {
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                cout << i << " ";
            }
        }
    }
    else {
        cout << "Invalid input";
    }

    return 0;
}
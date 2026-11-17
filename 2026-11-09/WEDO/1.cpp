#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 1 && n <= 1000000) {
        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }
    }
    else {
        cout << "Invalid input";
    }

    return 0;
}
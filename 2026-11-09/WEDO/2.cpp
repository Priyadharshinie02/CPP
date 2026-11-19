#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 1 && n <= 1000000) {
        for (int i = n; i >= 1; i--) {
            cout << i << " ";
        }
    }
    else {
        cout << "Invalid input";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 1 && n <= 1000000) {
        double sum = 0;

        for (int i = 1; i <= n; i++) {
            sum = sum + i;
        }

        double average = sum / n;

        cout << "Average: " << average;
    }
    else {
        cout << "Invalid input";
    }

    return 0;
}
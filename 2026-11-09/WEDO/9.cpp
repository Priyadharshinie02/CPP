#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n < 0) {
        n = -n;
    }

    int count = 0;

    if (n == 0) {
        count = 1;
    }
    else {
        while (n > 0) {
            n = n / 10;
            count++;
        }
    }

    cout << "Number of digits: " << count;

    return 0;
}
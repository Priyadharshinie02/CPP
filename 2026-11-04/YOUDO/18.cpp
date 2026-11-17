#include <iostream>
using namespace std;

int main() {
    int number = 7351;

    int a = number % 10;
    number = number / 10;

    int b = number % 10;
    number = number / 10;

    int c = number % 10;
    number = number / 10;

    int d = number % 10;

    int sum = a + b + c + d;

    cout << "Sum of digits = " << sum;

    return 0;
}
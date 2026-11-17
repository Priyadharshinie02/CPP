#include <iostream>
using namespace std;

int main() {
    int number = 407;

    int a = number % 10;
    number = number / 10;

    int b = number % 10;
    number = number / 10;

    int c = number % 10;

    int reverse = a * 100 + b * 10 + c;

    cout << "Reversed number = " << reverse;

    return 0;
}
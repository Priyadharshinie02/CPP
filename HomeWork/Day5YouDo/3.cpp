#include <iostream>
using namespace std;

int main() {
    int age;

    cin >> age;

    if (age >= 60 && age <= 120) {
        cout << "Eligible for senior citizen discount";
    }
    else if (age >= 0 && age < 60) {
        cout << "Not eligible for senior citizen discount";
    }
    else {
        cout << "Invalid age";
    }

    return 0;
}
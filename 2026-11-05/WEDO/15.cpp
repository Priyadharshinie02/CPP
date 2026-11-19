#include <iostream>
using namespace std;

int main() {
    int age = 17;
    bool hasLicence = true;

    bool allowed = age >= 18 && hasLicence;

    cout << "Allowed = " << allowed;

    return 0;
}
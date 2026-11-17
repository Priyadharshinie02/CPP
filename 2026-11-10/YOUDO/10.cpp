#include <iostream>
using namespace std;

int main() {
    int lanes = 5;
    int sum = 0;

    for (int i = 1; i <= lanes; i++) {
        int marker = i * 3;

        cout << marker << endl;

        sum = sum + marker;
    }

    cout << "Marker total = " << sum;

    return 0;
}
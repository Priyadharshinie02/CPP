#include <iostream>
using namespace std;

int main() {
    int total = 250;
    int issued = 63;

    int remaining = total - issued;

    cout << "Books remaining = " << remaining;
    return 0;
}
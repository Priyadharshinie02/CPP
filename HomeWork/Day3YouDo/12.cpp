#include <iostream>
using namespace std;

int main() {
    int pens = 500;
    int boxSize = 12;

    int boxes = pens / boxSize;
    int remaining = pens % boxSize;

    cout << "Full boxes = " << boxes << endl;
    cout << "Remaining pens = " << remaining;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int stock = 50;

    stock--;     // One bottle sold
    stock -= 8;  // Eight bottles sold
    stock += 3;  // Three bottles arrived

    cout << "Final stock = " << stock;

    return 0;
}
#include <iostream>
using namespace std;
int main() {
    int tank = 120;
    int used = 45;
    int remaining = tank - used;
    cout << "Water left = " << remaining << " litres";
    return 0;
}
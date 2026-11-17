#include <iostream>
using namespace std;

int main() {
    int initialWater = 40;
    int pumpRate = 12;
    int time = 10;
    int used = 35;

    int added = pumpRate * time;
    int remaining = initialWater + added - used;

    cout << "Water remaining = " << remaining << " litres";

    return 0;
}
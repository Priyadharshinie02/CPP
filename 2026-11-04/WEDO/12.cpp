#include <iostream>
using namespace std;

int main()
{
    int eggs = 275;
    int tray = 30;

    int fullTrays = eggs / tray;
    int left = eggs % tray;

    cout << "Full trays = " << fullTrays << endl;
    cout << "Eggs left = " << left;

    return 0;
}
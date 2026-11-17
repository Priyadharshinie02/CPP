#include <iostream>
using namespace std;

int main()
{
    int money = 125;
    int price = 150;

    int enough = money >= price;
    int less = money < price;

    cout << "Money enough = " << enough << endl;
    cout << "Money is less = " << less;

    return 0;
}
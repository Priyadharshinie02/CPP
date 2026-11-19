#include <iostream>
using namespace std;

int main() {
    int quantity = 25;
    int buyingPrice = 8;
    int sellingPrice = 11;

    int totalBuying = quantity * buyingPrice;
    int totalSelling = quantity * sellingPrice;

    int profit = totalSelling - totalBuying;

    cout << "Total profit = " << profit;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n;
    int oddSum = 0;
    int evenCount = 0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i%2!=0)
        {
            oddSum = oddSum + (i * i);
        }
        else
        {
            evenCount=evenCount+1;
        }
    }

    cout << "Odd square sum = " << oddSum << endl;
    cout << "Even count = " << evenCount << endl;

    return 0;
}

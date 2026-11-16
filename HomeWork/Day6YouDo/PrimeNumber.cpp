
#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;

    cout << "Enter N: ";
    cin >> n;

    if (n < 1 || n > 1000)
    {
        cout << "Invalid input";
    }
    else
    {
        for (int num = 2; count < n; num++)
        {
            int factors = 0;

            for (int i = 1; i <= num; i++)
            {
                if (num % i == 0)
                {
                    factors++;
                }
            }

            if (factors == 2)
            {
                count++;

                if (count == n)
                {
                    cout << "Nth Prime Number = " << num;
                }
            }
        }
    }

    return 0;
}

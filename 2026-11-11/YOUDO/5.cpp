
#include <iostream>
using namespace std;

int main()
{
    int a[3][2] = {
        {5, 8},
        {3, 7},
        {9, 2}
    };

    int b[3][2] = {
        {4, 1},
        {6, 5},
        {2, 8}
    };

    int c[3][2];
    int total;

    // Add corresponding elements
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print combined grid and row totals
    for(int i = 0; i < 3; i++)
    {
        total = 0;

        for(int j = 0; j < 2; j++)
        {
            cout << c[i][j] << " ";
            total += c[i][j];
        }

        cout << " | Row total: " << total << endl;
    }

    return 0;
}

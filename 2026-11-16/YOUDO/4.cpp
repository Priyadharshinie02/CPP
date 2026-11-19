
#include <iostream>
using namespace std;

// Function declaration
int sum(int first, int second);

int main()
{
    int a, b;

    cin >> a >> b;

    int result = sum(a, b);

    cout << result;

    return 0;
}

// Function definition
int sum(int first, int second)
{
    return first + second;
}

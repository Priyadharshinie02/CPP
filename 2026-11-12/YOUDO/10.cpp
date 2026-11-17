
#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[100];
    int count = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            arr[count] = i;
            count++;
        }
    }

    for(int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

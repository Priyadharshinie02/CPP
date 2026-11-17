
#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {41, 72, 15, 72, 60, 92};

    int target;
    int index = -1;

    cout << "Enter target ID: ";
    cin >> target;

    for(int i = 0; i < 6; i++)
    {
        if(arr[i] == target)
        {
            index = i;
            break;
        }
    }

    cout << index;

    return 0;
}

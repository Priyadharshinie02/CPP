
#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {101, 102, 103, 104, 105};

    int size = 5;
    int index;

    cout << "Enter index to delete: ";
    cin >> index;

    for(int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

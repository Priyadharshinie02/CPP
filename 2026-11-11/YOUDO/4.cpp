
#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {101, 105, 110, 114};
    int size = 4;

    // Insertion
    int pos = 2;
    int num = 108;

    if(size < 6 && pos >= 0 && pos <= size)
    {
        for(int i = size; i > pos; i--)
        {
            arr[i] = arr[i-1];
        }

        arr[pos] = num;
        size++;

        cout << "After insertion: ";
        for(int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        cout << "\nLogical size: " << size << endl;
    }
    else
    {
        cout << "Invalid insertion" << endl;
    }

    // Deletion
    int del = 3;

    if(del >= 0 && del < size)
    {
        for(int i = del; i < size - 1; i++)
        {
            arr[i] = arr[i+1];
        }

        size--;

        cout << "After deletion: ";
        for(int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        cout << "\nLogical size: " << size << endl;
    }
    else
    {
        cout << "Invalid deletion";
    }

    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30};
    int size = 3;
    int num = 15;
    int pos = 1;

    // Shift elements to the right
    for(int i = size; i > pos; i--)
    {
        arr[i] = arr[i-1];
    }

    // Insert the new ticket
    arr[pos] = num;

    size++;

    // Display the array
    cout << "Tickets: ";

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nUsed size: " << size;

    return 0;
}


/*Insert a new ticket
At the workshop desk, Divya keeps registration tickets in a holder with 
five slots. Three participants have already checked in. A late entry is 
approved, and the organiser asks Divya to put its ticket immediately after 
ticket 10. Divya needs to fit it in without changing the order of the tickets 
already there.
The holder contains 10, 20, and 30 in order. The new ticket is 15.
What moves make room for ticket 15, and which tickets and used size 
should Divya report afterward?*/
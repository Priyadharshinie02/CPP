
#include <iostream>
using namespace std;

// Function declaration
int readTeamSize();

int main()
{
    int size = readTeamSize();

    cout << size;

    return 0;
}

// Function definition
int readTeamSize()
{
    int size;

    cin >> size;

    return size;
}


#include <iostream>
using namespace std;

// Function declaration
void showDemoMarks();

int main()
{
    int marks;

    cin >> marks;

    showDemoMarks();

    cout << marks;

    return 0;
}

// Function definition
void showDemoMarks()
{
    int marks = 50;

    cout << marks << endl;
}

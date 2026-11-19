
#include <iostream>
#include <cmath>
using namespace std;

// Function declaration
int tablesNeeded(int students);

int main()
{
    int students;

    cin >> students;

    int result = tablesNeeded(students);

    cout << result;

    return 0;
}

// Function definition
int tablesNeeded(int students)
{
    return ceil(students / 4.0);
}

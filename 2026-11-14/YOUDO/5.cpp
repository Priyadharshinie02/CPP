
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string pet = "CAT";

    // Insert S at index 3
    pet.insert(3, "S");
    cout << pet << endl;

    // Erase character at index 3
    pet.erase(3, 1);
    cout << pet << endl;

    // Replace first character with B
    pet.replace(0, 1, "B");
    cout << pet << endl;

    return 0;
}

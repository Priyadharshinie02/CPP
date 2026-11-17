
#include <iostream>
#include <string>
using namespace std;

// Function declaration
void sayHello(string name);

int main()
{
    string name;

    getline(cin, name);

    sayHello(name);

    return 0;
}

// Function definition
void sayHello(string name)
{
    cout << "Hello, " << name << "!";
}

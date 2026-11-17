#include <iostream>
#include <string>
using namespace std;
void greet(string name)
{
    cout<<"Hello,"<<name<<"!";
}

int main()
{
    cout<<"Enter the name: ";
    string name;
    getline(cin,name);
    greet(name);
    return 0;
}
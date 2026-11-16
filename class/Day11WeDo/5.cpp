#include <iostream>
using namespace std;

int readChoice()
{
    int choice;
    cin>>choice;
    return choice;
}
int main()
{
    int result;
    result=readChoice();
    cout<<result;
    return 0;
}
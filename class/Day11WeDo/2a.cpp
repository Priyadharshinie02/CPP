#include<iostream>
using namespace std;
void student(string name)
{
    cout<<"hello"<<name;
}
int main()
{
    string name;
    getline(cin,name);
    cout<<name;
    student(name);
    

}
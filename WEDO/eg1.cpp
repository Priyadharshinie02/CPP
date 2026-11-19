#include <iostream>
using namespace std;


void add()
{
    int a = 10, b = 20;
    cout << "Sum = " <<a+b<< endl;
}
void add(int a, int b)
{
    cout<<"Sum = "<<a+b <<endl;
}
int add(int a,int b,int c)
{
    return a+b+c;
}
int add(int a,int b,float c)
{
    return a+b+c;
}
int main()
{
    add();
    add(10, 20);
    cout<<"Sum = " <<add(10, 20, 30) << endl;
    cout<<"Sum = " <<add(10, 20, 30) << endl;
    return 0;
}
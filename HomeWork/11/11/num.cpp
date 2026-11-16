#include<iostream>
using namespace std;
int main()
{
    int num;
    for(num=0;num<31;num++)
    {
    
    if(num%5!=0)
    {
        cout<<num<<endl;
        cout<<"the num is printed"<<endl;
    }
    else
    {
        cout<<"the num is not printed"<<endl;
    }
    }
    return 0;
}
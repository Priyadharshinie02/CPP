#include<iostream>
using namespace std;
int main()
{
    int count;
    cout<<"Enter a number:"<<endl;
    cin>>count;
    cout<<"The reverse of the number is:"<<endl;
   for(int i=count;i>0;i=i/10)
   {
    cout<<i%10;
       
   }
    return 0;
}
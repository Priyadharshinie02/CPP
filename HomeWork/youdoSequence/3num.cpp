#include<iostream>
using namespace std;    
int main()
{
    int b1,b2,b3;
    cout<<"Enter b1:"<<endl;
    cin>>b1;
    cout<<b1<<endl;
    cout<<"Enter b2:"<<endl;  
    cin>>b2;
    cout<<b2<<endl;
    cout<<"Enter b3:"<<endl;  
    cin>>b3;
    cout<<b3<<endl;
    if(b1>b2)
    {
        if(b1>b3)
        {
            cout<<"b1 is the largest number"<<b1<<endl;

        }
        else 
        {
            cout<<"b3 is the largest number"<<b3<<endl;
        }
    }
        if(b2>b3)
        {
            cout<<"b2 is the second largest number"<<b2<<endl;
        }
        else
        {
            cout<<"b3 is the second largest number"<<b3<<endl;
        }
        
        
    
}
      
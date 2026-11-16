#include<iostream>
using namespace std;
int main()
{
    int n;
    for(int i=1;i<=10;i++)
    {
        cout<<"Enter a number:"<<endl;
        cin>>n;
        if(n%2!=0)
        {
            cout<<n<<" is an odd number"<<endl;
        }
        else
        {
            cout<<n<<" is not an odd number"<<endl;
        }
    }
    return 0;
    
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cin>>n;
    cout<<"Enter the numbers:"<<endl;
    for(int i=1;i<=n;i++)
    {
        int num;
        cin>>num;
        sum=sum+num;
    }
    cout<<"The sum of the numbers is:"<<sum<<endl;
    return 0;
}

    
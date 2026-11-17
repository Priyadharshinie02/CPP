#include <iostream>
using namespace std;

int main()
{
    int arr[6]={41, 72, 15, 72, 60, 72};
    int target;
    int count=0;
    cout<<"Enter target ID:";
    cin>>target;
    cout<<"Indices: ";
    for(int i=0;i<6;i++)
    {
        if(arr[i]==target)
        {
            cout<<i;
            count=count+1;
        }
    }
    if(count==0)
    {
        cout<<"No matches";
    }
    cout<<"Count:"<<count;
    return 0;
}

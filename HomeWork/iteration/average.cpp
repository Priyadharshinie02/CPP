#include<iostream>
using namespace std;
int main()
{
    int n;
    int average=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        average=average+i;
    }
    cout<<"The average of the numbers is:"<<average/n<<endl;
    return 0;
}
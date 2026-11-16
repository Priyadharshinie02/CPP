#include<iostream>
using namespace std;    
int main()
{
    int n1=0;
    int n2=1;
    int n3;
    int i;
    int number;
    cout<<"Enter the number of elements: ";
    cin>>number;
    cout<<n1<<n2;    
    for(i=1;i<number;i++) 
    {    
        n3=n1+n2;    
        cout<<n3;    
        n1=n2;    
        n2=n3;    
    }  
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n, first = 0, second = 1, next;
    cout << "Enter the number of terms: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}

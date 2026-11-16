#include <iostream>
using namespace std;
int productOfDigits(int number)
{
    int product=1;
    while (number>0)
    {
        int digit=number%10;
        product=product*digit;
        number=number/10;
    }
    return product;
}
int main()
{
    int n;
    cin>>n;
    int rounds=0;
    while (n>=10)
    {
        n=productOfDigits(n);
        rounds=rounds+1;
    }
    cout<<"Final Digits"<<"rounds"<<rounds<<n<<endl;
    return 0;
}
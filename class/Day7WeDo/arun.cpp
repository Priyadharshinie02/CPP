
#include <iostream>
using namespace std;
int main()
{
    int num, digit, product, rounds=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>=10)
    {
        product = 1;
        while (num>0)
        {
            digit=num % 10;
            product=product*digit;
            num=num/10;
        }
        num=product;
        rounds++;
    }
    cout<<"Final digit="<< num << endl;
    cout<<"Rounds="<< rounds << endl;

    return 0;
}

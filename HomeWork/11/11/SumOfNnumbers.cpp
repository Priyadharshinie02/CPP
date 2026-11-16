#include<iostream>
using namespace std;
int main()
{
    int number;
    int count=1;
    int quotient=number;
    while(quotient>0)
    {
        quotient=number/10;
        count=count+1;
    }
}
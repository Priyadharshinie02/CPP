
#include <iostream>
using namespace std;

int main()
{
    int cells,target;
    int hours=0;
    cout<<"Enter initial population: ";
    cin>>cells;
    cout<<"Enter target population: ";
    cin>>target;
    while(cells<=target)
    {
        cells=cells*2;
        hours++;
    }
    cout<<"Hours="<<hours<<endl;
    cout<<"Cells="<<cells<<endl;
    return 0;
}

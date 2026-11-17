
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sign;
    int count = 0;

    getline(cin, sign);

    for(int i = 0; i < sign.length(); i++)
    {
        if(sign[i] == 'e')
        {
            count++;
        }
    }

    cout << count;

    return 0;
}

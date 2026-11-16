#include <iostream>
using namespace std;
double triangleArea(double base, double height)
{
    return 0.5* base* height;
}
int main()
{
    double base, height;
    cin>>base>>height;
    double area = triangleArea(base, height);
    cout << area;
    return 0;
}
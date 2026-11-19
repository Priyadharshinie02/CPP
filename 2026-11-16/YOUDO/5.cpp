
#include <iostream>
using namespace std;

double areaOfTriangle(double base, double height);

int main()
{
    double base, height;
    cin >> base >> height;
    double result = areaOfTriangle(base, height);
    cout << result;
    return 0;
}


double areaOfTriangle(double base, double height)
{
    double area = 0.5 * base * height;

    return area;
}

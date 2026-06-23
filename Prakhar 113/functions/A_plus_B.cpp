#include <iostream>
using namespace std;
double func(double a, double b)
{
    double res = a * a + b * b + 2 * a * b;
    return res;
}
int main()
{
    double a, b;
    cout << "enter the two number: ";
    cin >> a >> b;
    cout << func(a, b);

    return 0;
}
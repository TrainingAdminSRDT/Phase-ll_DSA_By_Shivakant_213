#include <iostream>
using namespace std;
int fact(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}
int binomialcoeff(int n, int r)
{
    int nf = fact(n);
    int rf = fact(r);
    int nrf = fact(n - r);
    return (nf / (rf * nrf));
}
int main()
{
    int n, r;
    cout << "enter the total number of items:";
    cin >> n;
    cout << "enter the number of items to be selected: ";
    cin >> r;
    cout << binomialcoeff(n, r);
    return 0;
}

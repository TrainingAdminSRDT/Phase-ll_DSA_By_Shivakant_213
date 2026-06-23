#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    int t = n;
    int res = 0;
    while (t != 0)
    {
        int d = t % 10;
        res = res + pow(d, 3);
        t = t / 10;
    }
    if (res == n)
    {
        cout << "Armstrong" << endl;
    }
    else
    {
        cout << "not" << endl;
    }
    return 0;
}
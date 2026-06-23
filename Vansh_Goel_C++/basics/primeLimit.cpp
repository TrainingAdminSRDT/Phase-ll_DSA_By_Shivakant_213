#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    cout << endl;
    int t = 0;
    bool isprime = true;
    for (int i = 2; i <= n; i++)
    {
        t = i;
        isprime = true;
        for (int j = 2; j <= sqrt(t); j++)
        {
            if (t % j == 0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime)
        {
            cout << t << "  ";
        }
    }
    return 0;
}
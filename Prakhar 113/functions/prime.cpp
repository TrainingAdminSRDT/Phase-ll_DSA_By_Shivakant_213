#include <iostream>
using namespace std;
bool isprime(int n)
{
    if (n == 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "enter the number to be checked: ";
    cin >> n;
    cout << isprime(n);
    return 0;
}
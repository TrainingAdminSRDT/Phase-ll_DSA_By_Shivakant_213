#include <iostream>
using namespace std;
bool palin(int n)
{
    int t = n;
    int rev = 0;
    while (t > 0)
    {
        int d = t % 10;
        rev = rev * 10 + d;
        t = t / 10;
    }
    return (n == rev);
}
int main()
{
    int n;
    cout << "enter the number to be checked: ";
    cin >> n;
    cout << palin(n);
    return 0;
}
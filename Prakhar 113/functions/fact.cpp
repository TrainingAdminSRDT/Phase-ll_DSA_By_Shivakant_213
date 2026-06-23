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
int main()
{
    int n;
    cout << "enter the number : ";
    cin >> n;
    int facto = fact(n);
    cout << "factorial of the number is: " << facto;
    return 0;
}
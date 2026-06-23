#include <iostream>
using namespace std;
int sumOfDigits(int n)
{
    int sum = 0;
    int t = n;
    while (t > 0)
    {
        int d = t % 10;
        sum = sum + d;
        t = t / 10;
    }
    return sum;
}
int main()
{
    int n;
    cout << "enter the number :";
    cin >> n;
    cout << sumOfDigits(n);
    return 0;
}
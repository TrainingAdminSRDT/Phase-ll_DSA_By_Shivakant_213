#include <iostream>
using namespace std;
void largest(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            cout << a;
        }
    }
    else if (b > c)
    {

        cout << b;
    }
    else
    {
        cout << c;
    }
}
int main()
{
    int a, b, c;
    cout << "enter the numbers a,b,c:";
    cin >> a >> b >> c;
    largest(a, b, c);
    return 0;
}
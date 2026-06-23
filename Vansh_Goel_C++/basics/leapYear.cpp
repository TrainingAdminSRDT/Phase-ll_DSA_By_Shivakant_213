#include <iostream>
using namespace std;
int main()
{
    int y;
    cout << "enter the year" << endl;
    cin >> y;
    if (y % 4 == 0 && y % 100 != 0)
    {
        cout << "leap year" << endl;
    }
    else if (y % 400 == 0)
    {
        cout << "leap year" << endl;
    }
    else
    {
        cout << "not a leap year" << endl;
    }
    return 0;
}
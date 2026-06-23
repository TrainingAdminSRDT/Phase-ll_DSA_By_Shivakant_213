#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of rows: ";
    cin >> n;
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            c = 0;
        }
        else
        {
            c = 1;
        }

        for (int j = 1; j <= i; j++)
        {
            if (c == 0)
            {
                cout << ++c;
            }
            else
            {
                cout << --c;
            }
        }
        cout << endl;
    }

    return 0;
}
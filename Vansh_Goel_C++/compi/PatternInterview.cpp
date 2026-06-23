#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 3; j++)
        {
            if (i == 0 || j == 0 || j == n + 3 - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < n + 7 - (n / 2); space++)
        {
            cout << " ";
        }

        for (int j = 0; j < i; j++)
            cout << ' ';

        int stars = n - 2 * i;
        for (int k = 0; k < stars; ++k)
            cout << '*';
        cout << '\n';
    }
    return 0;
}
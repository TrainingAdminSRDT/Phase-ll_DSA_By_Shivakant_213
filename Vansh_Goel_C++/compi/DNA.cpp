#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6;

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5 * n - 1; j++)
        {
            if (i == j % 4 || i + j % 4 == 4)
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
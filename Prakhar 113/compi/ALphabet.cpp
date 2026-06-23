#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch = 'a';

    for (int i = 0; i < 5; i++) // row manipulation
    {

        for (int j = 0; j < 26; j++) // column mani p
        {
            if (i == j % 8 || i + j % 8 == 8)
            {
                cout << char(ch + j);
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

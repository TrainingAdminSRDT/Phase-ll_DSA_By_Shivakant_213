#include <bits/stdc++.h>
using namespace std;
void recursion(int n[], int iend)
{
    if (iend < 0)
    {
        cout << "";
    }
    else
    {
        if (iend % 2 == 0)
        {
            cout << n[iend] << " ";

            recursion(n, iend - 2);
        }
        else
            recursion(n, iend - 1);
    }
}
int main()
{
    int T;
    cin >> T;
    int n[T];
    for (int i = 0; i < T; i++)
    {
        cin >> n[i];
    }

    recursion(n, T - 1);

    return 0;
}

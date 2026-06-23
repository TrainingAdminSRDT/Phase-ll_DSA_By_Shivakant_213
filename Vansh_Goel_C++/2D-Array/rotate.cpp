#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[][4] = {{5, 1, 9, 11},
                    {2, 4, 8, 10},
                    {13, 3, 6, 7},
                    {15, 14, 12, 16}};
    int n = 4;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    int a = n - 1;
    for (int i = 0; i < 4 / 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            swap(arr[j][i], arr[j][a]);
        }
        a--;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << " " << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}
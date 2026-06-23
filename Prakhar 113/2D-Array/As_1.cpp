#include <bits/stdc++.h>
using namespace std;
void findSeven(int arr[][3], int n, int m)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 7)
            {
                count++;
            }
        }
    }
    cout << count;
}

int main()
{
    int arr[][3] = {{4, 7, 8}, {8, 8, 7}}, n = 2, m = 3;
    findSeven(arr, n, m);
    return 0;
}
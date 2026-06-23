#include <bits/stdc++.h>
using namespace std;
void transpose(int arr[][4], int n, int m)
{
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << " " << arr[j][i];
    //     }
    //     cout << endl;
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {

            cout << " " << arr[j][i];
        }
        cout << endl;
    }
}

void sum2(int arr[][3], int m)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum = sum + arr[1][i];
    }
    cout << sum;
}
int main()
{
    int nums[][4] = {{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
    // sum2(nums, 3);
    transpose(nums, 4, 4);
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}};
    // transpose(arr, 2, 3);
    return 0;
}
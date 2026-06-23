#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {5, 2, 4, 3, 8};
    int n = 5;
    int maxNum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxNum = max(maxNum, arr[i]);
    }
    cout << "Maximum element in the array is: " << maxNum;
    return 0;
}
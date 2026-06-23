#include <bits/stdc++.h>
using namespace std;
void TrappedWater(int heights[], int n)
{
    int leftmax[20000];
    leftmax[0] = 0;
    int rightmax[20000];
    rightmax[0] = heights[n - 1];
    for (int i = 1; i < n; i++)
    {
        leftmax[i] = max(leftmax[i - 1], heights[i]);
        // cout << leftmax[i];
    }
    // cout << endl;
    for (int i = n - 2; i >= 0; i--)
    {
        rightmax[i] = max(rightmax[i + 1], heights[i]);
        // cout << rightmax[i];
    }
    int trappedWater = 0;
    for (int i = 0; i < n; i++)
    {
        int currwater = min(leftmax[i], rightmax[i]) - heights[i];
        if (currwater > 0)
            trappedWater += currwater;
    }
    cout << trappedWater;
}
int main()
{
    int heights[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(heights) / sizeof(int);
    TrappedWater(heights, n);
    return 0;
}
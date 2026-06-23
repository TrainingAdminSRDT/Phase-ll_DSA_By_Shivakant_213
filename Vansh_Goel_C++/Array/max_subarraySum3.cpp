// KADANE'S ALGORITHM
#include <bits/stdc++.h>
using namespace std;
void maxsum(int arr[], int n)
{
    int currsum = 0;
    int maxsum = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum = currsum + arr[i];
        maxsum = max(currsum, maxsum);
        if (currsum < 0)
        {
            currsum = 0;
        }
    }
    cout << maxsum;
}
int main()
{
    int a[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(a) / sizeof(int);
    maxsum(a, n);
    return 0;
}
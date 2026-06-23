#include <bits/stdc++.h>
using namespace std;
void maxsum(int arr[], int n)
{
    int maxsum = INT_MIN;
    int currsum = 0;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            currsum = 0;
            for (int i = start; i <= end; i++)
            {
                currsum += arr[i];
            }
            maxsum = max(currsum, maxsum);
        }
    }
    cout << "max sum = " << maxsum;
}
int main()
{
    int a[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(a) / sizeof(int);
    maxsum(a, n);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void maxsum(int arr[], int n)
{
    int previous_sum = 0;
    int maxsum = 0;
    for (int start = 0; start < n; start++)
    {
        previous_sum = 0;
        for (int end = start; end < n; end++)
        {
            previous_sum += arr[end];
            maxsum = max(previous_sum, maxsum);
        }
    }
    cout << "max sum =" << maxsum;
}
int main()
{
    int a[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(a) / sizeof(int);
    maxsum(a, n);
    return 0;
}
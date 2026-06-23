#include <bits/stdc++.h>
using namespace std;
void subarray(int arr[], int n)
{
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << arr[i] << " ";
            }
            cout << ",";
        }
        cout << endl;
    }
}
int main()
{
    int a[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(a) / sizeof(int);
    subarray(a, n);
    return 0;
}
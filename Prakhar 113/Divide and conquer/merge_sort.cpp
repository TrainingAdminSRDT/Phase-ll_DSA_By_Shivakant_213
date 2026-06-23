#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void merge(int arr[], int start, int end, int mid)
{
    vector<int> temp;
    int i = start;
    int j = mid + 1;
    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= end)
    {
        temp.push_back(arr[j++]);
    }
    for (int i = 0, si = start; si <= end; i++)
    {
        arr[si++] = temp[i];
    }
}
int mergesort(int arr[], int start, int end, int count)
{
    if (start >= end)
    {

        return count++;
    }
    int mid = start + (end - start) / 2;

    mergesort(arr, start, mid, count);
    mergesort(arr, mid + 1, end, count);
    merge(arr, start, end, mid);
}
bool issorted(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}
int main()
{
    int arr[] = {1, 2, 2, 2, 2, 1};
    int n = 6;
    int count = 0;
    if (!issorted(arr, n))
        cout << mergesort(arr, 0, n - 1, count) << " ";

    return 0;
}
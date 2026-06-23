#include <bits/stdc++.h>
using namespace std;
void print(string arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(string arr[], int si, int ei, int mid)
{
    vector<string> temp;
    int i = si;
    int j = mid + 1;
    while (i <= mid && j <= ei)
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
    while (j <= ei)
    {
        temp.push_back(arr[j++]);
    }
    for (int idx = si, i = 0; idx <= ei; i++)
    {
        arr[idx++] = temp[i];
    }
}
void mergesortStrings(string arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = si + (ei - si) / 2;
    mergesortStrings(arr, si, mid);
    mergesortStrings(arr, mid + 1, ei);
    merge(arr, si, ei, mid);
}

int main()
{
    string arr[] = {"sun", "earth", "mars", "mercury"};
    int n = 4;
    mergesortStrings(arr, 0, n - 1);
    print(arr, n);

    return 0;
}
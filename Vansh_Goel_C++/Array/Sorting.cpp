#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}

void bubbleDes(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
    print(arr, n);
}

void selectionDes(int arr[], int n)

{
    for (int i = 0; i < n - 1; i++)
    {
        int pos = i;
        for (int j = i + 1; j < n - 1; j++)
        {
            if (arr[pos] < arr[j])
            {
                pos = j;
            }
        }
        swap(arr[i], arr[pos]);
    }
    print(arr, n);
}

void insertionDes(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int pos = i - 1;
        while (pos >= 0 && arr[pos] < temp)
        {
            swap(arr[pos], arr[pos + 1]);
            pos--;
        }
        arr[pos + 1] = temp;
    }
    print(arr, n);
}

void countingDes(int arr[], int n)
{
    int freq[200000] = {0};
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }
    for (int i = maxi, j = 0; i >= mini; i--)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
    print(arr, n);
}
int main()
{
    int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    int n = sizeof(arr) / sizeof(int);
    // bubbleDes(arr, n);
    // selectionDes(arr, n);
    // insertionDes(arr, n);
    // countingDes(arr, n);
    return 0;
}
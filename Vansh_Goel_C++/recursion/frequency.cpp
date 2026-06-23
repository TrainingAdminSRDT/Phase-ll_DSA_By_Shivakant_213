#include <bits/stdc++.h>
using namespace std;
int freq(vector<int> arr, int i, int key)
{
    if (i == arr.size())
    {
        return 0;
    }
    if (arr[i] == key)
        return 1 + freq(arr, i + 1, key);
    else
        return freq(arr, i + 1, key);
}
int main()
{
    vector<int> arr = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    int key = 2;
    cout << freq(arr, 0, key);
    return 0;
}
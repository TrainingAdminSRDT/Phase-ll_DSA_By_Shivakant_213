#include <bits/stdc++.h>
using namespace std;
int BandS(int prices[], int n)
{
    int bestbuy[20000];
    bestbuy[0] = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        bestbuy[i] = min(bestbuy[i - 1], prices[i - 1]);
    }
    int profit = 0;
    for (int i = 0; i < n; i++)
    {
        profit = max(profit, (prices[i] - bestbuy[i]));
    }
    cout << profit;
}
int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr) / sizeof(int);
    BandS(arr, n);
    return 0;
}
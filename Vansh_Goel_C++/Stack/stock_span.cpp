#include <bits/stdc++.h>
using namespace std;
vector<int> stock(vector<int> arr)
{
    vector<int> span;
    stack<int> s;
    s.push(0);
    span.push_back(1);
    for (int i = 1; i < arr.size(); i++)
    {
        int currprice = arr[i];

        while (!s.empty() && currprice >= arr[s.top()])
        {
            s.pop();
        }
        if (s.empty())
        {
            span.push_back(i + 1);
        }
        else
        {
            span.push_back(i - s.top());
        }
        s.push(i);
    }
    return span;
}
int main()
{
    vector<int> arr = {100, 80, 60, 70, 60, 85, 100};
    vector<int> ans = stock(arr);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}
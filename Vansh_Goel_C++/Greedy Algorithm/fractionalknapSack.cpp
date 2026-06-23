#include <bits/stdc++.h>
using namespace std;
bool compare(pair<double, int> p1, pair<double, int> p2)
{
    return p1.first > p2.first; // descending order
}
int fractionalKnapsack(vector<int> val, vector<int> wt, int w)
{
    vector<pair<double, int>> ratio(val.size());
    for (int i = 0; i < val.size(); i++)
    {
        ratio[i] = make_pair(val[i] / wt[i], wt[i]);
    }
    for (int i = 0; i < val.size(); i++)
    {
        cout << ratio[i].first << "," << ratio[i].second << endl;
    }
    cout << "----------------------------------" << endl;
    sort(ratio.begin(), ratio.end(), compare); // sorting vector pair
    int ans = 0;
    for (int i = 0; i < val.size(); i++)
    {
        if (w >= ratio[i].second)
        {
            ans = ans + ratio[i].second * ratio[i].first;
            w = w - ratio[i].second;
        }
        else
        {
            ans += w * ratio[i].first;
            w = 0;
            break;
        }
    }

    return ans;
}
int main()
{
    vector<int> val = {100, 60, 120};
    vector<int> wt = {20, 10, 30};
    int w = 50;
    int ans = fractionalKnapsack(val, wt, w);
    cout << ans;

    return 0;
}
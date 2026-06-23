#include <bits/stdc++.h>
using namespace std;
void interleave(queue<int> &q)
{
    queue<int> t;
    int n = q.size();
    for (int i = 0; i < n / 2; i++)
    {
        t.push(q.front());
        q.pop();
    }
    while (!t.empty() && !q.empty())
    {
        q.push(t.front());
        q.push(q.front());
        q.pop();
        t.pop();
    }
}
int main()
{
    queue<int> q;
    int n;
    cin >> n;
    for (auto i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        q.push(t);
    }
    interleave(q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
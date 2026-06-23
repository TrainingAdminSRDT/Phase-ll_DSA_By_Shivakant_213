#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<pair<int, int>> *l;

public:
    Graph(int v)
    {
        V = v;
        l = new list<pair<int, int>>[V];
    }

    void addEdge(int u, int v, int wt)
    {
        l[u].push_back(make_pair(v, wt));
        l[v].push_back(make_pair(u, wt));
    }

    void primsAlgo(int src)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<bool> mst(V, false);
        int ans = 0;

        pq.push(make_pair(0, src));

        while (!pq.empty())
        {
            int u = pq.top().second;
            int wt = pq.top().first;
            pq.pop();

            if (!mst[u])
            {
                mst[u] = true;
                ans += wt;

                for (auto n : l[u])
                {
                    int v = n.first;
                    int currWt = n.second;
                    if (!mst[v])
                    {
                        pq.push(make_pair(currWt, v));
                    }
                }
            }
        }

        cout << "Total weight of MST: " << ans << endl;
    }
};

int main()
{
    Graph g(5);
    g.addEdge(0, 1, 10);
    g.addEdge(1, 3, 40);
    g.addEdge(3, 2, 50);
    g.addEdge(2, 0, 15);
    g.addEdge(3, 0, 30);
    g.primsAlgo(0);

    return 0;
}

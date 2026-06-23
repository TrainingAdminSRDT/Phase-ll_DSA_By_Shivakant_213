#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int V;
    list<int> *l;
    bool undir;

public:
    Graph(int v, bool undir = true)
    {
        V = v;
        l = new list<int>[V];
        this->undir = undir;
    }
    void addEdge(int i, int j)
    {
        l[i].push_back(j);
        if (undir)
        {
            l[j].push_back(i);
        }
    }
    bool isBipartite()
    {
        queue<int> q;
        vector<bool> vis(V, false);
        vector<int> color(V, -1);
        q.push(0);
        color[0] = 0;
        vis[0] = 0;
        while (q.size() > 0)
        {
            int curr = q.front();
            q.pop();
            list<int> nbr = l[curr];
            for (auto v : nbr)
            {
                if (!vis[v])
                {
                    vis[v] = true;
                    color[v] = !color[curr];
                    q.push(v);
                }
                else
                {
                    if (color[v] == color[curr])
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
int main()
{
    Graph graph(4, false);
    graph.addEdge(0, 1);
    graph.addEdge(1, 3);
    graph.addEdge(3, 2);
    graph.addEdge(2, 0);
    graph.addEdge(0, 3);
    cout << graph.isBipartite();
    return 0;
}
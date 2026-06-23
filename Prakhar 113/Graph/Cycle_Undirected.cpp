#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int v;
    list<int> *l;

public:
    Graph(int v)
    {
        this->v = v;
        l = new list<int>[v];
    }
    void addEdge(int x, int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void print()
    {
        for (int i = 0; i < v; i++)
        {
            list<int> neighbor = l[i];
            cout << u << " : ";
            for (auto x : neighbor)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    bool isCycleUndirectedHelper(int src, int parent, vector<bool> &vis)
    {
        vis[src] = true;
        list<int> neigh = l[src];
        for (auto v : neigh)
        {
            if (!vis[v])
            {
                if (isCycleUndirectedHelper(v, src, vis))
                    return true;
                else
                {
                    if (v != parent)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
    bool isCycleUndirected()
    {
        vector<bool> vis(v, false);
        return isCycleUndirectedHelper(0, -1, vis);
    }
};
int main()
{
    int v = 5;
    Graph graph(v);
    graph.addEdge(1, 0);
    graph.addEdge(1, 2);
    graph.addEdge(2, 0);
    graph.addEdge(2, 3);
    graph.addEdge(4, 3);
    cout << graph.isCycleUndirected();
}
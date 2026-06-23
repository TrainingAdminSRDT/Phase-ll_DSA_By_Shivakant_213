#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int V;
    list<int> *l;

public:
    Graph(int v)
    {
        V = v;
        l = new list<int>[V];
    }
    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void print()
    {
        for (int u = 0; u < V; u++) // 0,1,2,3,4
        {
            list<int> neighbours = l[u];
            cout << u << " : ";
            for (auto x : neighbours)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    void dfsHelper(int u, vector<bool> &vis)
    {
        vis[u] = true;
        cout << u << " ";
        list<int> nb = l[u];
        for (auto v : nb)
        {
            if (!vis[v])
                dfsHelper(v, vis);
        }
    }
    void dfs()
    {
        vector<bool> vis(7, false);
        dfsHelper(0, vis);
        cout << endl;
    }
    bool hasPathHelper(int src, int dest, vector<bool> &vis)
    {
        if (src == dest)
        {
            return true;
        }
        vis[src] = true;
        list<int> nb = l[src];
        for (auto v : nb)
        {
            if (!vis[v])
                if (hasPathHelper(v, dest, vis))
                    return true;
        }
        return false;
    }
    void hasPath(int src, int dest)
    {
        vector<bool> vis(7, false);
        cout << hasPathHelper(src, dest, vis);
        cout << endl;
    }
};

int main()
{
    Graph graph(7);
    // undirected graph
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);
    graph.addEdge(3, 4);
    graph.addEdge(3, 5);
    graph.addEdge(4, 5);
    graph.addEdge(5, 6);
    graph.hasPath(0, 5);
    return 0;
}
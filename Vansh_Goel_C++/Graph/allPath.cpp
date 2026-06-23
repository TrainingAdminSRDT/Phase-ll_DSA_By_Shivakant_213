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
    void print()
    {
        for (int u = 0; u < V; u++)
        {
            list<int> neighbor = l[u];
            cout << u << " : ";
            for (auto x : neighbor)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    void allPathHelper(int src, int dest, vector<int> &vis, vector<int> &path)
    {
        vis[src] = 1;
        path.push_back(src);
        if (src == dest)
        {
            for (auto x : path)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        else
        {
            list<int> nbr = l[src];
            for (auto x : nbr)
            {
                if (!vis[x])
                {
                    allPathHelper(x, dest, vis, path);
                }
            }
        }
        path.pop_back();
        vis[src] = 0;
    }
    void allPath(int src, int dest)
    {
        vector<int> vis(V, 0);
        vector<int> path;
        allPathHelper(src, dest, vis, path);
        return;
    }
};

int main()
{
    Graph graph(6, true);
    graph.addEdge(0, 3);
    graph.addEdge(3, 1);
    graph.addEdge(2, 3);
    graph.addEdge(5, 2);
    graph.addEdge(5, 0);
    graph.addEdge(4, 0);
    graph.addEdge(4, 1);
    graph.allPath(5, 1);
    // graph.print();
    return 0;
}
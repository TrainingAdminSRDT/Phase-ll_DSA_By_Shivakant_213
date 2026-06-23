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
        for (int i = 0; i < V; i++)
        {
            list<int> neighbor = l[i];
            cout << i << " : ";
            for (auto x : neighbor)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    bool isCycleDirHelper(int src, vector<bool> &vis, vector<bool> &recPath)
    {
        vis[src] = true;
        recPath[src] = true;
        for (auto nbr : l[src])
        {
            if (!vis[nbr] && isCycleDirHelper(nbr, vis, recPath))
            {
                return true;
            }
            else if (recPath[nbr])
            {
                return true;
            }
        }
        recPath[src] = false;
        return false;
    }
    bool isCycleDir()
    {
        vector<bool> vis(V, false);
        vector<bool> recPath(V, false);
        for (int i = 0; i < V; i++)
        {
            if (isCycleDirHelper(i, vis, recPath))
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{

    Graph graph(4, false);
    graph.addEdge(1, 0);
    graph.addEdge(0, 2);
    graph.addEdge(2, 3);
    // graph.addEdge(3, 0);
    cout << graph.isCycleDir();
    return 0;
}
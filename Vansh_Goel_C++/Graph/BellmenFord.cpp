#include <bits/stdc++.h>
using namespace std;

// Structure to represent an edge
struct Edge
{
    int v, wt;
    Edge(int v, int wt)
    {
        this->v = v;
        this->wt = wt;
    }
};

// Bellman-Ford Algorithm
void bellmanFord(vector<vector<Edge>> graph, int V, int src)
{
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;

    // Relax all edges V-1 times
    for (int i = 0; i < V - 1; i++)
    { // O(V)
        for (int u = 0; u < V; u++)
        { // O(V)
            for (Edge e : graph[u])
            { // O(E)
                if (dist[u] != INT_MAX && dist[e.v] > dist[u] + e.wt)
                {
                    dist[e.v] = dist[u] + e.wt;
                }
            }
        }
    }

    // Check for negative-weight cycles
    for (int u = 0; u < V; u++)
    {
        for (Edge e : graph[u])
        {
            if (dist[u] != INT_MAX && dist[e.v] > dist[u] + e.wt)
            {
                cout << "Graph contains negative-weight cycle" << endl;
                return;
            }
        }
    }

    // Print shortest distances
    cout << "Vertex Distance from Source:" << endl;
    for (int i = 0; i < V; i++)
    {
        if (dist[i] == INT_MAX)
            cout << i << " : INF" << endl;
        else
            cout << i << " : " << dist[i] << endl;
    }
}

int main()
{
    // Bellman-Ford Graph Initialization
    int V = 5;
    vector<vector<Edge>> graph(V);

    // Adding edges
    graph[0].push_back(Edge(1, 2));
    graph[0].push_back(Edge(2, 4));
    graph[1].push_back(Edge(2, -4));
    graph[2].push_back(Edge(3, 2));
    graph[3].push_back(Edge(4, 4));
    graph[4].push_back(Edge(1, -1));

    // Call Bellman-Ford with source vertex 0
    bellmanFord(graph, V, 0);

    return 0;
}

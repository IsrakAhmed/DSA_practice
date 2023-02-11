#include <bits/stdc++.h>

using namespace std;

const int N = 100; // maximum number of nodes in the graph

vector<int> graph[N]; // adjacency list representation of the graph

bool visited[N]; // array to keep track of visited nodes

void bfs(int start)
{
    queue<int> q; // queue for storing nodes to be processed

    q.push(start); // push the start node into the queue

    visited[start] = true; // mark the start node as visited

    while (!q.empty())
    {
        int node = q.front(); // get the front node from the queue

        cout << node << " "; // print the node

        q.pop(); // remove the node from the queue

        // loop through the neighbors of the node
        for (int i = 0; i < graph[node].size(); i++)
        {
            int neighbor = graph[node][i];
            if (!visited[neighbor])
            {
                // mark the neighbor as visited
                visited[neighbor] = true;

                q.push(neighbor); // push the neighbor into the queue
            }
        }
    }
}


int main()
{

    int m; // m = number of edges
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v; // u = source node, v = destination node

        cin >> u >> v;

        graph[u].push_back(v); // add edge (u, v) to the graph

        graph[v].push_back(u); // add edge (v, u) to the graph (for undirected graph)
    }

    int start;
    cin >> start; // start node for BFS

    bfs(start); // perform BFS starting from the start node

    return 0;
}

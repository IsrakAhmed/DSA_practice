#include <bits/stdc++.h>

using namespace std;

const int N = 100; // maximum number of nodes in the graph

int graph[N][N]; // adjacency matrix representation of the graph

bool visited[N]; // array to keep track of visited nodes


void bfs(int start, int n)
{
    queue<int> q; // queue for storing nodes to be processed

    q.push(start); // push the start node into the queue

    visited[start] = true; // mark the start node as visited

    while (!q.empty())
    {
        int node = q.front(); // get the front node from the queue

        cout << node << " "; // print the node

        q.pop(); // remove the node from the queue

        // loop through all the nodes
        for (int i = 1; i <= n; i++)
        {
            // if the node is adjacent and not visited, visit it
            if (graph[node][i] == 1 && !visited[i])
            {
                visited[i] = true; // mark the node as visited

                q.push(i); // push the node into the queue
            }
        }
    }
}

int main()
{

    int n, m; // n = number of nodes, m = number of edges

    cin >> n >> m;

    // take input the graph as an nxn adjacency matrix
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> graph[i][j];
        }
    }

    int start;
    cin >> start; // start node for BFS

    bfs(start, n); // perform BFS starting from the start node

    return 0;
}


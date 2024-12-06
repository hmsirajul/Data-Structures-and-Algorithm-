#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>> &adjList, vector<bool> &visited, int startNode)
{
    queue<int> q; // Create a queue for BFS

    visited[startNode] = true; // Mark the startNode as visited
    q.push(startNode);         // Enqueue the startNode

    // Perform BFS
    while (!q.empty())
    {
        int currentNode = q.front();
        q.pop();                    // Dequeue a vertex from queue
        cout << currentNode << " "; // Print the dequeued vertex

        // Visit all adjacent vertices of the dequeued vertex
        for (int neighbor : adjList[currentNode])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true; // Mark the unvisited neighbor as visited
                q.push(neighbor);         // Enqueue the visited neighbor
            }
        }
    }
}

int main()
{
    int vertices = 6;
    vector<vector<int>> adjList(vertices);
    vector<bool> visited(vertices, false);

    adjList[0] = {1, 3};
    adjList[1] = {0, 2, 4};
    adjList[2] = {1, 5};
    adjList[3] = {0, 4};
    adjList[4] = {1, 3, 5};
    adjList[5] = {2, 4};

    cout << "BFS ";
    bfs(adjList, visited, 0);
    cout << endl;
    fill(visited.begin(), visited.end(), false);

    return 0;
}
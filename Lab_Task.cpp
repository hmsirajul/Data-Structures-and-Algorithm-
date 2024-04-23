#include<bits/stdc++.h>
using namespace std;


void bfs(vector<vector<int>>& adjList, vector<bool>& visited, int startNode)
{
    queue<int> q;
    q.push(startNode);
    visited[startNode] = true;


    while (!q.empty())
    {
        int currentNode = q.front();
        q.pop();


        cout << currentNode << " ";


        for (int neighbor : adjList[currentNode])
        {

            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}


void dfs(vector<vector<int>>& adjList, vector<bool>& visited, int currentNode)
{

    visited[currentNode] = true;


    cout << currentNode << " ";


    for (int neighbor : adjList[currentNode])
    {

        if (!visited[neighbor])
        {
            dfs(adjList, visited, neighbor);
        }
    }
}

int main()
{
    int vertices = 6;
    vector<vector<int>> adjList(vertices); // Adjacency list representation of the graph
    vector<bool> visited(vertices, false); // To keep track of visited nodes

    // Add edges to the graph
    adjList[0] = {1, 3};
    adjList[1] = {0, 2, 4};
    adjList[2] = {1, 5};
    adjList[3] = {0, 4};
    adjList[4] = {1, 3, 5};
    adjList[5] = {2, 4};

    // Perform BFS traversal starting from vertex 0
    cout << "Breadth First Traversal: ";
    bfs(adjList, visited, 0);
    cout << endl;

    // Reset visited vector
    fill(visited.begin(), visited.end(), false);

    // Perform DFS traversal starting from vertex 0
    cout << "Depth First Traversal: ";
    dfs(adjList, visited, 0);
    cout << endl;

    return 0;
}


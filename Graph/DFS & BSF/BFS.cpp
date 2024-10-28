#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> & adjList, vector<bool>& visited , int currentNode)
{
    visited[currentNode] = true;
    cout<< currentNode << " ";

    for(int neighbor : adjList[currentNode])
    {
        if(!visited[neighbor])
        {
            dfs(adjList, visited , neighbor);
        }
    }
}

int main ()
{
    int vertices = 6;
    vector<vector<int>> adjList(vertices);
    vector<bool> visited(vertices,false);

    adjList[0] = {1, 3};
    adjList[1] = {0, 2, 4};
    adjList[2] = {1, 5};
    adjList[3] = {0, 4};
    adjList[4] = {1, 3, 5};
    adjList[5] = {2, 4};


    cout << "Depth First Traversal: ";
    dfs(adjList, visited, 0);
    cout << endl;

    return 0;
}
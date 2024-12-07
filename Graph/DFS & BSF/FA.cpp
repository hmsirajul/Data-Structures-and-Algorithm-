#include<bits/stdc++.h>
using namespace std;

//const int INF = 1e9;
const int INF = numeric_limits<int>::infinity();
int main ()
{
    vector<vector<int>> graph =
    {
        {0, 3, INF, 7},
        {8, 0, 2, INF},
        {5, INF, 0, 1},
        {2, INF, INF, 0}
    };

    int n = graph.size();
    vector<vector<int>> dist = graph;

    // Applying Floyd-Warshall Algorithm
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // if (dist[i][k] + dist[k][j] < dist[i][j])
                // {
                //     dist[i][j] = dist[i][k] + dist[k][j];
                // }
                if (dist[i][k] != INF && dist[k][j] != INF && dist[i][k] + dist[k][j] < dist[i][j]) 
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    // Printing the result matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (dist[i][j] == INF)
            {
                cout << "INF ";
            }
            else
            {
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

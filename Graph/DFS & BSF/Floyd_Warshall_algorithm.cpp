#include <bits/stdc++.h>
using namespace std;


const int INF = numeric_limits<int>::infinity();

vector<vector<int>> floydWarshall(const vector<vector<int>>& graph) {
    int n = graph.size();
    vector<vector<int>> distances(n, vector<int>(n, INF));

    // Initialize the distance matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j) {
                distances[i][j] = 0;
            } else if (graph[i][j] != 0) {
                distances[i][j] = graph[i][j];
            }
        }
    }

    // Floyd-Warshall algorithm
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (distances[i][k] != INF && distances[k][j] != INF && 
                    distances[i][j] > distances[i][k] + distances[k][j]) {
                    distances[i][j] = distances[i][k] + distances[k][j];
                }
            }
        }
    }

    return distances;
}

int main() {
    vector<vector<int>> graph =
    {
        {0, 3, INF, 7},
        {8, 0, 2, INF},
        {5, INF, 0, 1},
        {2, INF, INF, 0}
    };

    vector<vector<int>> dist = floydWarshall(graph);

    for (const auto& row : dist)
    {
        for (int val : row)
        {
            if (val == INF)
                cout << "INF ";
            else
                cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}

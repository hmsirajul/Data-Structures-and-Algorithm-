///Activity Selection Problem

#include <bits/stdc++.h>
using namespace std;

int maxNon(vector<pair<int, int>> &talks)
{
    // Sort talks by their ending times
    sort(talks.begin(), talks.end(), [](pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    });

    int count = 0;
    int lastTime = 0;

    // Iterate through the talks
    for (int i = 0; i < talks.size(); i++)
    {
        // Check if the talk starts after the last selected talk ends
        if (talks[i].first >= lastTime)
        {
            count++;
            lastTime = talks[i].second; // Update the last selected talk's end time
        }
    }
    return count;
}

int main()
{
    int n = 5; // Number of talks
    vector<pair<int, int>> talks = {{1, 3}, {2, 5}, {4, 7}, {1, 8}, {5, 9}};
    int result = maxNon(talks);
    cout << "Max talks: " << result << endl;
    return 0;
}

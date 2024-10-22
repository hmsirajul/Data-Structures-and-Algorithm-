#include<bits/stdc++.h>
using namespace std;

int main() {
    int W = 10; 
    int n = 4; 
    vector<int> w = {2, 1, 5, 3};  
    vector<int> v = {300, 200, 400, 500}; 

  
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= W; ++j) {
            
            if (w[i - 1] <= j) {
                
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i - 1]] + v[i - 1]);
            } else {
                
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

 
    cout << "Maximum value: " << dp[n][W] << endl;

    return 0;
}

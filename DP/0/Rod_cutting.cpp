#include<bits/stdc++.h>
 using namespace std;

int main() 
{
    int n = 8;
    vector<int> prices = {1, 5, 8, 9, 10, 17, 17, 20};


    vector<int> dp(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        int max_val = 0;
        for (int j = 0; j < i;j++)
        {
            max_val = max(max_val, prices[j] + dp[i - j - 1]);
        }
        dp[i] = max_val;
    }

    cout<< dp[n] << endl;

    return 0;
}
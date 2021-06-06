#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;


int main() {
    int n;
    cin>>n;
    vector<int> time(n);
    int t_sum = 1;
    rep(i, n) {
        cin >> time[i];
        t_sum += time[i];
    }
    int t_sum_half = t_sum/2;

    // vector<vector<bool>> dp(105, vector<bool> (t_sum));
    bool dp[n+1][t_sum];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= t_sum; j++)
        {
            dp[i+1][j] |= dp[i][j];
            if(j >= time[i]) dp[i+1][j] |= dp[i][j-time[i]];
        }
    }
    for (int i = t_sum_half; i < t_sum; i++)
    {
        if (dp[n][i]) {
            cout<<i<<endl;
            break;    
        }
    }
    return 0;
}
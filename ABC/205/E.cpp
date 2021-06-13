#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (ll i = 0; i< (n) ; ++i)






// dpで解こうとしてメモリ不足

// const ll N = 1000000007;

// int main() {
//     int n, m, k;
//     cin >>n>>m>>k;
//     vector<vector<int>> dp(n+5, vector<int>(m+5));

//     dp[0][0] = 0;

//     for (int i = 0; i < n+1; i++)
//     {
//         for (int j = 0; j < m+1; j++)
//         {
//             if (i+1 <= j+k) dp[i+1][j] += dp[i][j]%N;
//             dp[i][j+1] += dp[i][j]%N;
//         }
//     }
//     cout << dp[n][m]%N << endl;
//     return 0;
// }
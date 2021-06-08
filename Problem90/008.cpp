#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i< (n) ; ++i)
using ll = long long;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    string atc = "atcoder";
    const ll N = 1000000007;


    ll dp[atc.size()+1][s.size()+1];
    memset(dp, 0, sizeof(dp));

    dp[0][0] = 1;

    for (int i = 0; i < atc.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (i == 0) {
                if (atc[i] == s[j]) {
                    dp[i+1][j+1] += dp[i][j]%N;
                }
                dp[i][j+1] += dp[i][j]%N;
            } else {
                if (atc[i] == s[j]) {
                    dp[i+1][j+1] += dp[i][j]%N;
                }
                dp[i][j+1] += dp[i][j]%N;
            }
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        dp[atc.size()][i+1] += dp[atc.size()][i]%N;
    }
    cout << dp[atc.size()][s.size()]%N << endl;
    return 0;
}
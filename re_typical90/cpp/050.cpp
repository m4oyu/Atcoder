#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

// 動的計画法？
// 桁あふれ注意

int ANSMOD = pow(10, 9) + 7;

int main(int argc, char const *argv[])
{
    int N, L;
    cin >> N >> L;

    int dp[N + 1];
    dp[0] = 1;
    for (int i = 1; i <= N; i++)
    {
        dp[i] = 0;
    }

    for (int i = 0; i < N; i++)
    {
        // 1
        dp[i + 1] += dp[i];
        dp[i + 1] %= ANSMOD;

        // L
        if (i + L <= N)
        {
            dp[i + L] += dp[i];
            dp[i + L] %= ANSMOD;
        }
    }

    cout << dp[N] << endl;
    return 0;
}
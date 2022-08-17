#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int ANSMOD = pow(10, 9) + 7;

int main()
{
    int k;
    cin >> k;

    if (k % 9 != 0)
    {
        cout << "0" << endl;
        return 0;
    }

    vector<ll> dp(k + 1);
    dp[0] = 1;

    for (int i = 1; i <= k; i++)
    {
        int n = min(i, 9);

        for (int j = 1; j <= n; j++)
        {
            dp[i] = (dp[i] + dp[i - j]) % ANSMOD;
        }
    }

    cout << dp[k] << endl;
    return 0;
}

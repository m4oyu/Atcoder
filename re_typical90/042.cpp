#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll mod = 1000000007;

int main() {
    int k;
    cin >> k;

    if (k % 9 != 0) {
        cout << 0 << endl;
        return 0;
    }

    vector<ll> dp(100020, 0);
    dp[0] = 1;

    for (int i = 0; i <= k; i++) {
        for (int j = 1; j < 10; j++) {
            dp[i + j] = (dp[i + j] + dp[i]) % mod;
        }
    }

    cout << dp[k] << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)

ll w = 1000000000000000000;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    vector<ll> low(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        low[i] = a[i] - i - 1;
    }

    rep(i, q)
    {
        ll k;
        cin >> k;
        int index = lower_bound(low.begin(), low.end(), k) - low.begin();

        ll ans;
        if (index == 0)
            ans = k;
        else
            ans = a[index - 1] + k - low[index - 1];
        cout << ans << endl;
    }
    return 0;
}
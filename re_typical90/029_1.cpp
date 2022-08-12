#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

ll w, n;

ll a[5000001];

int main()
{
    cin >> w >> n;

    ll l, r;
    for (ll i = 1; i <= n; i++)
    {
        cin >> l >> r;

        ll m = 0;
        for (ll j = l; j <= r; j++)
        {
            m = max(m, a[j]);
        }

        cout << m + 1 << endl;

        for (ll j = l; j <= r; j++)
        {
            a[j] = m + 1;
        }
    }

    return 0;
}
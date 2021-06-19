#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int n;
    cin >> n;

    map<int, int> mp;

    int a[n];
    ll ans = 0;
    rep(i, n)
    {
        cin >> a[i];
        if (mp.count(a[i]))
        {
            ans += i - mp[a[i]];
            mp[a[i]]++;
        }
        else
        {
            ans += i;
            mp[a[i]] = 1;
        }
    }

    cout << ans << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;

    ll a[n], b[n];
    ll amax = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        amax = max(amax, a[i]);
    }

    ll left = 0, right = amax+1;
    while (right - left > 1)
    {
        ll middle = left + (right-left)/2;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (middle <= a[i]) {
                ans += b[i];
            }
        }
        
        if (ans <= k) {
            right = middle;
        } else {
            left = middle;
        }
    }
    cout << right << endl;

}
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i< (n) ; ++i)
using ll = long long;

int main() {
    int n;
    ll k;
    cin >> n >> k;
    vector<pair<ll, int>> fr(n);

    rep(i, n) {
        cin >> fr[i].first >> fr[i].second;
    }
    sort(fr.begin(), fr.end());

    ll ans = k;
    int j = 0;
    while(j < n && fr[j].first <= ans) {
        ans += fr[j].second;
        j++;
    }
    cout << ans << endl;
    return 0;
}
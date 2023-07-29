#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n, -1);
    vector<ll> b(m, -1);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a[0] > b[m - 1]) {
        cout << b[m - 1] + 1 << endl;
        return 0;
    }

    ll price, j = 0;
    for (ll i = 0; i < n; i++) {
        price = a[i];

        while (b[j] < price) {
            j++;
        }

        if (m - j <= i + 1) {
            cout << price << endl;
            return 0;
        }
    }
}
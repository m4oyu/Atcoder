#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, m, d;
    cin >> n >> m >> d;

    vector<ll> a(n);
    vector<ll> b(m);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++) {
        cin >> b[i];
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    ll i = 0, j = 0;
    ll diff;
    if (a[i] < b[j]) {
        diff = b[j] - a[i];
    } else {
        diff = a[i] - b[j];
    }

    while (d < diff && i < n && j < m) {
        if (a[i] < b[j]) {
            j++;
            diff = abs(b[j] - a[i]);
        } else {
            i++;
            diff = abs(a[i] - b[j]);
        }
    }

    if (d < diff) {
        cout << a[i] + b[j] << endl;
    } else {
        cout << -1 << endl;
    }
}
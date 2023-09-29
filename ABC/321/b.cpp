#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, x;
    cin >> n >> x;

    vector<ll> a(n - 1);
    ll sum = 0;
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
        sum += a[i];
    }

    sort(a.begin(), a.end());

    // min
    ll minSum = x - (sum - a[n - 2]);
    if (minSum <= 0) {
        cout << 0 << endl;
        return 0;
    }

    // mid
    ll mid = x - (sum - (a[0] + a[n - 2]));
    if (a[0] <= mid && mid <= a[n - 2]) {
        cout << mid << endl;
        return 0;
    }

    // max
    ll maxSum = x - (sum - a[0]);
    if (maxSum <= 0) {
        cout << a[n - 2] << endl;
        return 0;
    }

    cout << "-1" << endl;
    return 0;
}
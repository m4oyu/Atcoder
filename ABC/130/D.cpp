#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;

    ll a[100000];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll left = 0, right = 0, ans = 0, sum = 0;

    while (left < n) {
        while (right < n && sum < k) {
            sum += a[right];
            right++;
        }

        if (sum < k) {
            break;
        }

        ans += n - right + 1;

        sum -= a[left];
        left++;
    }

    cout << ans << endl;

    return 0;
}
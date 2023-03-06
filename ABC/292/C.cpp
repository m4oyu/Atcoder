#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

ll count_pairs(int n) {
    ll count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count += (i == n / i) ? 1 : 2;
        }
    }
    return count;
}

int main() {
    int N;
    cin >> N;

    ll ans = 0;

    for (ll i = 1; i < N; i++) {
        ll a, b;
        a = i;
        b = N - i;

        a = count_pairs(a);
        b = count_pairs(b);

        ans += a * b;
    }

    cout << ans << endl;
}
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

// 1st wc
// int main() {
//     ll N;
//     vector<ll> ABC(3);
//     cin >> N >> ABC[0] >> ABC[1] >> ABC[2];

//     sort(ABC.begin(), ABC.end());

//     ll x, y;
//     x = N / ABC[2];
//     for (ll i = x; i >= 0; i--) {
//         y = (N - ABC[2] * i) / ABC[1];
//         for (ll j = y; j >= 0; j--) {
//             if ((N - ABC[2] * i - ABC[1] * j) % ABC[0] == 0) {
//                 cout << i << ", " << j << ", "
//                      << (N - ABC[2] * i - ABC[1] * j) / ABC[0] << endl;
//                 cout << i + j + (N - ABC[2] * i - ABC[1] * j) / ABC[0] <<
//                 endl; return 0;
//             }
//         }
//     }
// }

// 2nd
ll extGCD(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll d = extGCD(b, a % b, y, x);
    y -= a / b * x;
    return d;
}

int main() {
    ll A, B, C, N;
    cin >> N >> A >> B >> C;

    ll ans = (1LL << 30);

    // By+Cz = N-Ax
    ll x = N / A;
    for (int i = 0; i <= x; i++) {
        ll d = N - A * i;

        // By+Cz = gcd(B,C)
        ll d0, y_d, z_d;
        d0 = extGCD(B, C, y_d, z_d);
        if (d % d0 != 0) continue;

        y_d = y_d * (d / d0);
        z_d = z_d * (d / d0);

        // B/d0(y-y_d)+C/d0(z-z_d) = 0
        // y-y_d = -(C/d0)t
        //   <=>  y = -(C/d0)t + y_d (0 <= y <= 9999)
        //   <=>  (y_d-y)/(C/d0) = t
        // (B/d0)t = z-z_d
        //   <=> z = (B / d0) t + z_d

        ll t_min = (y_d - 9999) / (C / d0), t_max = (y_d - 0) / (C / d0) + 1;

        for (ll j = t_min; j <= t_max; j++) {
            ll y = -(C / d0) * j + y_d;
            ll z = (B / d0) * j + z_d;

            if (y < 0 || z < 0) continue;

            ans = min(ans, i + y + z);
        }
    }
    cout << ans << endl;
}

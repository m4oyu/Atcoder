#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    ll N;
    vector<ll> ABC(3);
    cin >> N >> ABC[0] >> ABC[1] >> ABC[2];

    sort(ABC.begin(), ABC.end());

    ll x, y;
    x = N / ABC[2];
    for (ll i = x; i >= 0; i--) {
        y = (N - ABC[2] * i) / ABC[1];
        for (ll j = y; j >= 0; j--) {
            if ((N - ABC[2] * i - ABC[1] * j) % ABC[0] == 0) {
                cout << i << ", " << j << ", "
                     << (N - ABC[2] * i - ABC[1] * j) / ABC[0] << endl;
                cout << i + j + (N - ABC[2] * i - ABC[1] * j) / ABC[0] << endl;
                return 0;
            }
        }
    }
}

// #include <algorithm>
// #include <iostream>
// using namespace std;

// long long N;
// long long A, B, C;

// int main() {
//     cin >> N;
//     cin >> A >> B >> C;

//     long long Answer = (1LL << 30);
//     for (int i = 0; i <= 9999; i++) {
//         for (int j = 0; j <= 9999 - i; j++) {
//             long long V = N - 1LL * i * A - 1LL * j * B;
//             long long R = 1LL * i + 1LL * j + V / C;
//             if (V % C != 0LL || V < 0 || R > 9999LL) continue;
//             cout << R << endl;
//             Answer = min(Answer, R);
//         }
//     }
//     cout << Answer << endl;
//     return 0;
// }
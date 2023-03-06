#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    ll N, Q;
    cin >> N >> Q;

    ll P[N + 1];
    for (ll i = 0; i < N + 1; i++) {
        P[i] = 0;
    }

    for (ll i = 0; i < Q; i++) {
        int c, x;
        cin >> c >> x;

        if (c == 1)
            P[x]++;
        else if (c == 2)
            P[x] += 2;
        else if (c == 3) {
            if (2 <= P[x])
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}
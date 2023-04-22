#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, t;
    cin >> n >> t;

    ll c[n], r[n];
    bool flag = false;
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        if (c[i] == t) {
            flag = true;
        }
    }
    for (int i = 0; i < n; i++) {
        cin >> r[i];
    }

    ll ansC = -1;
    ll ansR = 0;

    if (!flag) {
        t = c[0];
    }

    for (int i = 0; i < n; i++) {
        if (c[i] == t && ansR < r[i]) {
            ansC = i;
            ansR = r[i];
        }
    }

    cout << ansC + 1 << endl;
}
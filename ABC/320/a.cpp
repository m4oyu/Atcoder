#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll a, b;
    cin >> a >> b;

    ll ans = pow(a, b) + pow(b, a);
    cout << ans << endl;
}
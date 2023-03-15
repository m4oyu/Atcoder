#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll mod = pow(10, 9) + 7;

// a^b
ll big_power(ll a, ll b) {
    ll ans = 1;

    while (b != 0)
    {
        if (b % 2 == 1) ans = ans * a % mod;
        a = a * a % mod;
        b /= 2;
    }

    return ans;  
}

int main() {
    ll n, k;
    cin >> n >> k;

    if (k == 1) {
        cout << (n == 1 ? 1 : 0) << endl;
    } else if (n == 1) {
        cout << k % mod << endl;
    } else if (n == 2) {
        cout << k * (k-1) % mod << endl;
    } else {
        cout << (k * (k-1) % mod) * big_power(k-2, n-2) % mod << endl;
    }

    return 0;
}
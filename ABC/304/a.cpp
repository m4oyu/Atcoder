#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n3 = 1000, n4 = 10000, n5 = 100000, n6 = 1000000, n7 = 10000000,
       n8 = 100000000, n9 = 1000000000;

    ll n;
    cin >> n;

    if (n < n3) {
        cout << n << endl;
    } else if (n3 <= n && n < n4) {
        cout << n / 10 * 10 << endl;
    } else {
    }
}
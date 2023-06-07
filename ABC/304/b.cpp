#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n1 = 10, n2 = 100, n3 = 1000, n4 = 10000, n5 = 100000, n6 = 1000000,
       n7 = 10000000, n8 = 100000000, n9 = 1000000000;

    ll n;
    cin >> n;

    if (n < n3) {
        cout << n << endl;
    } else if (n3 <= n && n < n4) {
        cout << n / n1 * n1 << endl;
    } else if (n4 <= n && n < n5) {
        cout << n / n2 * n2 << endl;
    } else if (n5 <= n && n < n6) {
        cout << n / n3 * n3 << endl;
    } else if (n6 <= n && n < n7) {
        cout << n / n4 * n4 << endl;
    } else if (n7 <= n && n < n8) {
        cout << n / n5 * n5 << endl;
    } else if (n8 <= n && n < n9) {
        cout << n / n6 * n6 << endl;
    }
}
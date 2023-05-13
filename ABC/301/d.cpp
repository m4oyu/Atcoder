#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s;
    ll n;
    cin >> s >> n;

    vector<ll> pow_of_2{1};
    for (int i = 1; i <= 60; i++) {
        long long power = pow_of_2[i - 1] * 2;
        pow_of_2.push_back(power);
    }

    ll smax = 0, smin = 0;
    for (int i = 1; i <= s.size(); i++) {
        if (s[s.size() - i] == '?') {
            smax += pow_of_2[i - 1];
        }
        if (s[s.size() - i] == '1') {
            smax += pow_of_2[i - 1];
            smin += pow_of_2[i - 1];
        }
    }

    if (smin > n) {
        cout << -1 << endl;
        return 0;
    }

    if (smax <= n) {
        cout << smax << endl;
    } else if (smax > n) {
        ll sum = smin;
        for (int i = 1; i <= s.size(); i++) {
            if (sum + pow_of_2[i - 1] <= n && s[s.size() - i] == '?') {
                sum += pow_of_2[i - 1];
            }
        }
        cout << sum << endl;
    }
}
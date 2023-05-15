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

    ll smin = 0;
    for (int i = 1; i <= s.size(); i++) {
        if (s[s.size() - i] == '1') {
            smin += pow_of_2[i - 1];
        }
    }

    if (n < smin) {
        cout << -1 << endl;
        return 0;
    } else {
        ll sum = smin;
        for (int i = 1; i <= s.size(); i++) {
            if (sum + pow_of_2[s.size() - i] <= n && s[i - 1] == '?') {
                sum += pow_of_2[s.size() - i];
            }
        }
        cout << sum << endl;
    }
}
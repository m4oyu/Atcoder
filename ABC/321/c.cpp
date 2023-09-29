#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll k;
    cin >> k;

    queue<ll> q;
    vector<ll> ans = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 1; i < 10; i++) {
        q.push(i);
    }

    while (!q.empty()) {
        ll a = q.front();
        q.pop();

        for (int i = 0; i < a % 10; i++) {
            ll b = a * 10 + i;
            ans.push_back(b);
            q.push(b);
        }
    }

    cout << ans[k - 1] << endl;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    ll k;
    cin >> n >> k;

    vector<bool> visit(100000, false);
    visit[n] = true;
    vector<int> record;
    record.push_back(n);
    bool frag = false;

    int x = n;
    for (ll i = 0; i < k; i++) {
        int sum = 0;
        int tmp = x;
        while (tmp > 0) {
            sum += tmp % 10;
            tmp = tmp / 10;
        }

        x = (x + sum) % 100000;
        record.push_back(x);
        if (visit[x]) {
            frag = true;
            break;
        }
        visit[x] = true;
    }

    if (!frag) {
        cout << x << endl;
    } else {
        ll count = 0;
        for (int i = 0; i < record.size(); i++) {
            if (record[i] == x) {
                break;
            }
            count++;
        }
        ll repeat_size = record.size() - (count + 1);

        ll ans = (k - count) % repeat_size;
        cout << record[count + ans] << endl;
    }
}
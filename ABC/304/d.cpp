#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int w, h;
    cin >> w >> h;

    int n;
    cin >> n;

    vector<int> berry_x(n);
    vector<int> berry_y(n);
    for (int i = 0; i < n; i++) {
        cin >> berry_x[i] >> berry_y[i];
    }

    int a;
    cin >> a;
    vector<int> cut_x(a + 1);
    cut_x[a] = w;
    for (int i = 0; i < a; i++) {
        cin >> cut_x[i];
    }
    int b;
    cin >> b;
    vector<int> cut_y(b + 1);
    cut_y[b] = h;
    for (int i = 0; i < b; i++) {
        cin >> cut_y[i];
    }

    map<pair<int, int>, int> m;
    ll max_berry = 0, pieces_with_berry = 0;

    for (int i = 0; i < n; i++) {
        int x = *lower_bound(cut_x.begin(), cut_x.end(), berry_x);
        int y = *lower_bound(cut_x.begin(), cut_x.end(), berry_x);

        if (m.count(make_pair(x, y)) == 0) {
            m.insert(make_pair(make_pair(x, y), 1));
            pieces_with_berry++;
        } else {
            m[make_pair(x, y)]++;
        }
    }

    ll max = 0, min = 200000;
    for (auto &&i : m) {
        if (max < i.second) {
            max = i.second;
        }
        if (min > i.second) {
            min = i.second;
        }
    }

    cout << ((n == pieces_with_berry) ? min : 0) << " " << max << endl;
}
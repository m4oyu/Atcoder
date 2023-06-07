#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int h, w, rs, cs, rt, ct;
    vector<vector<char>> m(1002, vector<char>(1002, 'n'));

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    deque<vector<int>> deq;

    cin >> h >> w >> rs >> cs >> rt >> ct;
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cin >> m[i][j];
        }
    }

    vector<vector<vector<ll>>> c(
        1002, vector<vector<ll>>(1002, vector<ll>(4, 1000000)));
    for (int i = 0; i < 4; i++) {
        c[rs][cs][i] = 0;
    }

    for (int i = 0; i < 4; i++) {
        if (m[rs + dx[i]][cs + dy[i]] != '.') {
            continue;
        }
        deq.push_back({rs + dx[i], cs + dy[i], i, 0});
    }

    vector<int> a(4);
    while (!deq.empty()) {
        a = deq.front();
        deq.pop_front();
        if (c[a[0]][a[1]][a[2]] < a[3]) {
            continue;
        }

        for (int i = 0; i < 4; i++) {
            int t_count = a[3] + (a[2] == i ? 0 : 1);
            int t_row = a[0] + dx[i];
            int t_col = a[1] + dy[i];

            c[a[0]][a[1]][i] = t_count;

            if (m[t_row][t_col] == '.' && t_count < c[t_row][t_col][i]) {
                deq.push_back({t_row, t_col, i, t_count});
            }
        }

        ll ans = 1000000;
        for (int i = 0; i < 4; i++) {
            ans = min(ans, c[rt][ct][i]);
        }

        cout << ans << endl;

        return 0;
    }

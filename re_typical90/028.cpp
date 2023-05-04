#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    vector<vector<int>> m(1001, vector<int>(1001, 0));

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int lx, ly, rx, ry;
        cin >> lx >> ly >> rx >> ry;

        m[ry][rx]++;
        m[ly][lx]++;
        m[ry][lx]--;
        m[ly][rx]--;
    }

    int count = 0;
    vector<int> ans(n + 1, 0);
    for (int i = 0; i < 1001; i++) {
        for (int j = 0; j < 1001; j++) {
            count += m[i][j];
            m[i][j] = count;
        }
    }
    count = 0;
    for (int i = 0; i < 1001; i++) {
        for (int j = 0; j < 1001; j++) {
            count += m[j][i];
            m[j][i] = count;
            ans[count]++;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}
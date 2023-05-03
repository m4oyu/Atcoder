#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<pair<int, int>>> g(100001);
vector<int> c(100001, -1);

void dfs(int pos, int col) {
    c[pos] = col;
    for (pair<int, int> i : g[pos]) {
        if (c[i.first] == -1) {
            if (i.second % 2 == 0) {
                dfs(i.first, col);
            } else {
                dfs(i.first, 1 - col);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int u, v, w;
    for (int i = 1; i < n; i++) {
        cin >> u >> v >> w;
        g[u].push_back(make_pair(v, w));
        g[v].push_back(make_pair(u, w));
    }

    dfs(1, 0);

    for (int i = 1; i <= n; i++) {
        cout << c[i] << endl;
    }
}
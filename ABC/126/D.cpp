#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int N;
vector<pair<int, int>> G[100005];
vector<int> col(100005, -1);

void dfs(int pos, int cur) {
    col[pos] = cur;
    for (auto p : G[pos]) {
        if (col[p.first] > -1) continue;
        dfs(p.first, (p.second-cur)%2);
    }
}

int main() {
    cin >> N;
    int u, v, w;
    rep(i, N) {
        cin >> u >> v >> w;

        G[u].push_back(make_pair(v, w));
        G[v].push_back(make_pair(u, w));
    }

    dfs(1, 0);

    for (int i = 1; i <= N; i++)
    {
        cout << col[i] << endl;
    }
    
    return 0;
}
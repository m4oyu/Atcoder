#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<int>> path(150001);
vector<int> g(150001, 150001);

int count(int a, int tmp) {
    int ret = tmp;
    for (auto &&i : path[a])
    {
        if (g[i] > g[a]) {
            g[i] = max(g[i], g[a]);
            ret = max(g[i], ret);
            count(i, tmp);
        }
    }
    return ret;
}

int main() {
    int n1, n2, m;
    cin >> n1 >> n2 >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;

        path[a].push_back(b);
        path[b].push_back(a);
    }

    g[1] = 0, g[n1+n2] = 0;


    int maxn1 = count(1, 0);
    int maxn2 = count(n1+n2, 0);

    cout << maxn1 + maxn2 + 1 << endl;
}
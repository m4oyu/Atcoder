#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<int>> path(150001);

int solve(int start, int end) {
    vector<int> dist(150001, -1);

    queue<int> q;
    q.push(start);

    while (!q.empty()) {
        int a = q.front();
        q.pop();

        for (auto &&i : path[a]) {
            if (dist[i] == -1) {
                q.push(i);
            }
            // -1 との対処
            dist[i] = min(dist[i], dist[a] + 1);
        }
    }

    return *max_element(&dist[start], &dist[end]);
}

int main() {
    int n1, n2, m;
    cin >> n1 >> n2 >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        path[a].push_back(b);
        path[b].push_back(a);
    }

    int maxn1 = solve(1, n1);
    int maxn2 = solve(n1 + n2, n1 + 1);

    cout << maxn1 + maxn2 + 1 << endl;
}
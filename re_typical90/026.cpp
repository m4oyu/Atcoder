#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<vector<int>> g(100001);
vector<int> c(100001, -1);

int count0 = 0, count1 = 0;

void dfs(int pos, int col) {
    if (col == 0) {
        count0++;
    } else {
        count1++;
    }
    c[pos] = col;

    for (int i : g[pos]) {
        if (c[i] == -1) {
            dfs(i, 1 - col);
        }
    }
}

int main() {
    int n;
    cin >> n;

    int a, b;
    for (int i = 1; i < n; i++) {
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    dfs(1, 0);

    if (count0 < count1) {
        for (int i = 1, count = 0; count < n / 2; i++) {
            if (c[i] == 1) {
                count++;
                cout << i << " ";
            }
        }
    } else {
        for (int i = 1, count = 0; count < n / 2; i++) {
            if (c[i] == 0) {
                count++;
                cout << i << " ";
            }
        }
    }
}
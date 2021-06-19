#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int A[1<<18];
int B[1<<18];
vector<int> G[1<<18]; // vectorの配列
int col[1<<18];

// 深さ優先探索
void dfs(int pos, int val) {
    col[pos] = val;
    for (int i : G[pos])
    {
        if(col[i] >= 1) continue;
        dfs(i, 3-val);
    }
}


int main() {
    int n;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    dfs(1,1);

    vector<int> a, b;
    for (int i = 1; i <= n; i++)
    {
        if(col[i] == 1) a.push_back(i);
        if(col[i] == 2) b.push_back(i);
    }
    if (a.size() < b.size()) {
        rep(i, n/2) {
            cout << b[i] << " ";
        }
        cout << endl;
    } else {
        rep(i, n/2) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
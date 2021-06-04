#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i< (n) ; ++i)
using ll = long long;

int n;
vector<vector<int>> tree(100000, vector<int>(0));
const int INF = 100000;
vector<int> dist(100000);

// 幅優先探索
void solve(int start) {
    for (int i = 1; i <= n; i++)
    {
        dist[i] = INF;
    }
    
    queue<int> q;
    q.push(start);
    dist[start] = 0;

    while (!q.empty())
    {
        int position = q.front();
        q.pop();
        for (int to : tree[position])
        {
            if(dist[to] == INF) {
                dist[to] = dist[position] + 1;
                q.push(to);
            }
        }
    }
    return;
}

int main() {
    cin >> n;

    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    solve(1);
    int maxV = 0;
    int maxI = 0;
    for (int i = 1; i <= n; i++)
    {
        if (maxV < dist[i]) {
            maxV = dist[i];
            maxI = i;
        }
    }

    solve(maxI);
    maxV = 0;
    maxI = 0;
    for (int i = 1; i <= n; i++)
    {
        if (maxV < dist[i]) {
            maxV = dist[i];
        }
    }

    cout << maxV+1 << endl;
    return 0;
}
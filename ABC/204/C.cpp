#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

vector<vector<int>> ab(2005, vector<int>(0));

int start(int start)
{
    vector<bool> map(2005);

    queue<int> q;
    q.push(start);
    map[start] = true;
    int ret = 1;
    while (!q.empty())
    {
        int pos = q.front();
        q.pop();
        for (int to : ab[pos])
        {
            if(!map[to]) {
                ret++;
                map[to] = true;
                q.push(to);
            }
        }
    }
    return ret;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a, b;
    rep(i, m)
    {
        cin >> a >> b;
        ab[a].push_back(b);
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += start(i);
    }
    cout << ans << endl;
    return 0;
}
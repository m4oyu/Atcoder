#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

vector<int> G[200002];
bool tab[200002];

int bfs(int start)
{
    if (tab[start])
        return 0;

    queue<int> q;
    q.push(start);
    int ret = 0;
    tab[start] = true;
    while (!q.empty())
    {
        int pos = q.front();
        q.pop();
        for (int to : G[pos])
        {
            if (tab[to])
                continue;

            ret++;
            tab[to] = true;
            q.push(to);
        }
    }
    return ret;
}

int main()
{
    int n;
    cin >> n;

    int left[n / 2];
    int right[n / 2];
    int count = 0;
    int center;

    for (int i = 0; i < n / 2; i++)
        cin >> left[i];

    if (n % 2 == 1)
    {
        cin >> center;
        count++;
    }

    for (int i = (n / 2) - 1; i >= 0; i--)
    {
        cin >> right[i];
    }

    for (int i = 0; i < n / 2; i++)
    {
        if (left[i] == right[i])
            continue;
        G[left[i]].push_back(right[i]);
        G[right[i]].push_back(left[i]);
    }
    memset(tab, false, sizeof(tab));

    int ans = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (left[i] == right[i])
            continue;
        ans += bfs(left[i]);
    }
    cout << ans << endl;
    return 0;
}